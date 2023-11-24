#include "Rpn.hpp"

bool    isnumberOrsign(std::string token)
{
    for (size_t i = 0; i < token.length(); ++i)
    {
        if (!isdigit(token[i]) && token[i] != '+' && token[i] != '-' && token[i] != '*' && token[i] != '/')
            return false;
    }
    return true;
}

int     rpn(std::string input)
{
    std::stack<int> stack;
    std::stringstream ss(input);
    std::string token;
    int a;
    int b;

    while (ss >> token)
    {
        if (!isnumberOrsign(token))
            throw std::invalid_argument("Error");
        if (token == "+")
        {
            if (stack.size() < 2)
                throw std::invalid_argument("Error");
            a = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();
            stack.push(a + b);
        }
        else if (token == "-")
        {
            if (stack.size() < 2)
                throw std::invalid_argument("Error");
            a = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();
            stack.push(b - a);
        }
        else if (token == "*")
        {
            if (stack.size() < 2)
                throw std::invalid_argument("Error");
            a = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();
            stack.push(a * b);
        }
        else if (token == "/")
        {
            if (stack.size() < 2)
                throw std::invalid_argument("Error");
            a = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();
            stack.push(b / a);
        }
        else
        {
            stack.push(std::stoi(token));
        }
    }
    return stack.top();
}