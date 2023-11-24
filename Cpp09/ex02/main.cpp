#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc <=2 )
    {
        std::cout << "Usage: " << argv[0] << " need more arguments" << std::endl;
        return 1;
    }
    std::vector<int> input = parseInput(argc, argv);
    std::cout << "Before : ";
    for (size_t i = 0; i < input.size(); ++i)
    {
        std::cout << input[i] << " ";
    }
    std::clock_t start = std::clock();
    std::vector<int> result = pmergeVector(input);
    std::clock_t end = std::clock();
    double elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    std::cout << "After : ";
    for (size_t i = 0; i < result.size(); ++i)
    {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Time to process a range of " << result.size() << " elements with std::vector " << elapsed_time << " seconds." << std::endl;




    std::list<int> inputList = parseInputForList(argc, argv);
    std::clock_t start1 = std::clock();
    std::list<int> resultList = pmergeList(inputList);
    std::clock_t end1 = std::clock();
    double elapsed_time1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC;

    std::cout << "Time to process a range of " << result.size() << " elements with std::list " << elapsed_time1 << " seconds." << std::endl;

    // for (std::list<int>::iterator it = resultList.begin(); it != resultList.end(); ++it)
    // {
    //     std::cout << *it << " ";
    // }
    // std::cout << std::endl;

    return 0;
}