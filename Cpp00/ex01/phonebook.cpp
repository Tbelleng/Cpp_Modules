/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:48:29 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/15 15:25:03 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    Phonebook::add(int i)
{
    int j = 0;

    while (this->contact_[j].exist(j) == 1)
        j++;
    if (i <= 7)
        this->contact_[j].new_contact(j);
    else
    {
        i = i % 8;
        this->contact_[i].new_contact(i);
    }
    std::cout << "the count is " << i << std::endl;
    return ;
}

void    Phonebook::search()
{
    int i = 0;
    int a = 0;

    while (i < 8)
    {
        this->contact_[i].display(i);
        i++;
    }
    std::cout << "Provide the contact index to get details: ";

    if (!(std::cin >> a)) 
    {
        std::cout << "Invalid input. Please enter a valid integer." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return ;
    }
    else if (a < 0 || a > 7) 
    {
        std::cout << "This is not a valid index. Please enter a number between 0 and 7." << std::endl;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return ;
    }
    else
        this->contact_[a].specific(a);
    return ;
}

Phonebook::Phonebook()
{
}
Phonebook::~Phonebook()
{
}
