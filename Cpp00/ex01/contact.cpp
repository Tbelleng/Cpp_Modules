/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:48:02 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/15 14:05:24 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
    this->first_name = "";
    this->last_name = "";
    this->nickname = "";
    this->phone_nb = "";
    this->darkest_secret = "";
}

void    Contact::new_contact(int neww)
{
    this->index = neww;
    std::string tmp;

    std::cout << "Going to add a new contact..." << std::endl;
    std::cout << "first name : ";
    std::cin >> tmp;
    this->first_name = tmp;
    std::cout << "last name : ";
    std::cin >> tmp;
    this->last_name = tmp;
    std::cout << "nickname : ";
    std::cin >> tmp;
    this->nickname = tmp;
    std::cout << "phone number : ";
    std::cin >> tmp;
    this->phone_nb = tmp;
    std::cout << "darkest_secret : ";
    std::cin >> tmp;
    this->darkest_secret = tmp;
    std::cout << "this contact has been added ! " << std::endl;
    return ;
}

int     Contact::exist(int exist)
{
    this->index = exist;

    if (this->first_name != "")
        return (1);
    else
        return (0);
}

void    Contact::rebuild(const std::string& str)
{
    std::string tmp;

    if (str.length() > 10)
        tmp = this->first_name.substr(0, 9) + ".";
    else
    {
        tmp = str;
        tmp.resize(10, ' ');
    }
    std::cout << tmp;
}

void    Contact::display(int to_display)
{
    this->index = to_display;
    std::string tmp;

    std::cout << to_display;
    std::cout << " | ";
    rebuild(first_name);
    std::cout << " | ";
    rebuild(last_name);
    std::cout << " | ";
    rebuild(nickname);
    std::cout << std::endl;
    return ;
}

void    Contact::specific(int spec)
{
    (void)spec;

    std::cout << this->index;
    std::cout << " | ";
    std::cout << this->first_name;
    std::cout << " | ";
    std::cout << this->last_name;
    std::cout << " | ";
    std::cout << this->nickname;
    std::cout << " | ";
    std::cout << this->phone_nb;
    std::cout << " | ";
    std::cout << this->darkest_secret << std::endl;
}

Contact::~Contact(void)
{

};
