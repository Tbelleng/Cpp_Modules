/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:48:19 by tbelleng          #+#    #+#             */
/*   Updated: 2023/06/06 16:48:20 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string> 

int main (int argc, char ** agrv)
{
    Phonebook book;
    std::string tmp;
    int i = 0;

    std::cout << "Welcome to PhoneBook" << std::endl;
    while (1)
    {
        std::cout << "Enter a command : ";
        std::cin >> tmp;
        if (tmp.compare("ADD") == 0)
        {
            book.add(i);
            i++;
        }
        if (tmp.compare("SEARCH") == 0)
            book.search();        
        if (tmp.compare("EXIT") == 0)
            exit (0);    

    }
    return (0);
}

