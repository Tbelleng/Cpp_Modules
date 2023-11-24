#include "Rpn.hpp"

int main(int argc, char **argv)
{
    int result;
    if (argc != 2)
    {
        std::cout << "Usage: " << argv[0] << " \"1 2 + 3 4 + *\"" << std::endl;
        return 1;
    }
    try
    {
        result = rpn(argv[1]);
        std::cout << result << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}