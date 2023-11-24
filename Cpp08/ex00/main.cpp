/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:49:20 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/12 14:24:43 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main()
{
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    std::list<int> myList = {10, 20, 30, 40, 50};

    int numberToFind = 3;

    if (easyfind(myVector, numberToFind)) {
        std::cout << numberToFind << " Value is in the vector" << std::endl;
    } else {
        std::cout << numberToFind << " Value is not in the vector" << std::endl;
    }

    if (easyfind(myList, numberToFind)) {
        std::cout << numberToFind << " Value is in the list" << std::endl;
    } else {
        std::cout << numberToFind << " Value is not in the list" << std::endl;
    }
	return (0);
}