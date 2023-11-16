/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:51:07 by tbelleng          #+#    #+#             */
/*   Updated: 2023/11/14 19:23:46 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() 
{
    std::cout << "-------------using int type------------\n" << std::endl;
    
    int arr[] = {1, 2, 3, 4, 5};
    size_t length = 5;
    
    iter(arr, length, printElement);
    std::cout << std::endl;
    
    std::cout << "\n-------------using std::string type------------\n" << std::endl;
    
    std::string arr1[] = {"hello", "wolrd", "its", "from", "42"};
    size_t length1 = 5;

    iter(arr1, length1, printChar);
    std::cout << std::endl;
    
    std::cout << "\n-------------using float type------------\n" << std::endl;
    float array[] = {1.00, 2.5, 34.2, 42.42, 500.1};
    
    iter(array, length, printfloat);
    std::cout << std::endl;

    return 0;
}
