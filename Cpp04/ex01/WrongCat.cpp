/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:27:48 by tbelleng          #+#    #+#             */
/*   Updated: 2023/08/03 16:45:31 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
    return ;
}

WrongCat::~WrongCat(void)
{
 std::cout << "WrongCat Destructor called" << std::endl;
 return ;
}

WrongCat::WrongCat(const WrongCat& copy)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    this->type = copy.type;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
    this->type = copy.type;
    return *this;
}

/* void WrongCat::makeSound(void) const
{
    std::cout << "MIAAAAAAAAA WOUUUUUUUUUUU" << std::endl;
    return ;
} */