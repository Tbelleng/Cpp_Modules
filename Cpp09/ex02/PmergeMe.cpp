#include "PmergeMe.hpp"

bool isNumber(const char* str) 
{
    char* endptr;
    strtol(str, &endptr, 10);

    return (*endptr == '\0');
}

std::vector<int> parseInput(int argc, char** argv) {
    std::vector<int> result;

    for (int i = 1; i < argc; ++i) {
        if (isNumber(argv[i])) {
            result.push_back(atoi(argv[i]));
        } else {
            std::cerr << "Error: Argument " << i << " is not a number." << std::endl;
            exit(1);
        }
    }
    return result;
}

std::list<int> parseInputForList(int argc, char** argv) 
{
    std::list<int> result;

    for (int i = 1; i < argc; ++i) {
        if (isNumber(argv[i])) {
            result.push_back(atoi(argv[i]));
        } else {
            std::cerr << "Error: Argument " << i << " is not a number." << std::endl;
            exit(1);
        }
    }
    return result;
}

// ************************ Using Vector ************************

std::vector<int> mergeVector(std::vector<int> left, std::vector<int> right)
{
    std::vector<int> result;
    int leftSize = left.size();
    int rightSize = right.size();
    int i = 0;
    int j = 0;

    while (i < leftSize && j < rightSize)
    {
        if (left[i] < right[j])
        {
            result.push_back(left[i]);
            i++;
        }
        else
        {
            result.push_back(right[j]);
            j++;
        }
    }

    while (i < leftSize)
    {
        result.push_back(left[i]);
        i++;
    }

    while (j < rightSize)
    {
        result.push_back(right[j]);
        j++;
    }

    return result;
}

std::vector<int> pmergeVector(std::vector<int> input)
{
    std::vector<int> result;
    int size = input.size();
    int half = size / 2;
    std::vector<int> left(input.begin(), input.begin() + half);
    std::vector<int> right(input.begin() + half, input.end());

    if (size == 1)
    {
        return input;
    }
    else
    {
        left = pmergeVector(left);
        right = pmergeVector(right);
        result = mergeVector(left, right);
    }
    return result;
}

// ************************ Using List ************************

std::list<int> mergeList(std::list<int> left, std::list<int> right)
{
    std::list<int> result;
    int leftSize = left.size();
    int rightSize = right.size();
    int i = 0;
    int j = 0;

    while (i < leftSize && j < rightSize)
    {
        if (left.front() < right.front())
        {
            result.push_back(left.front());
            left.pop_front();
            i++;
        }
        else
        {
            result.push_back(right.front());
            right.pop_front();
            j++;
        }
    }

    while (i < leftSize)
    {
        result.push_back(left.front());
        left.pop_front();
        i++;
    }

    while (j < rightSize)
    {
        result.push_back(right.front());
        right.pop_front();
        j++;
    }

    return result;
}

std::list<int> pmergeList(std::list<int> input)
{
    int size = input.size();

    if (size <= 1) {
        return input;
    }

    int half = size / 2;

    std::list<int> left(input.begin(), std::next(input.begin(), half));

    std::list<int> right;
    std::list<int>::iterator it = input.begin();
    std::advance(it, half);
    right.insert(right.begin(), it, input.end());

    left = pmergeList(left);
    right = pmergeList(right);

    return mergeList(left, right);
}
