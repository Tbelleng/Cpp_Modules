/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:42:33 by tbelleng          #+#    #+#             */
/*   Updated: 2023/08/03 16:10:27 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    return ;
}

Dog::~Dog(void)
{
 std::cout << "Dog Destructor called" << std::endl;
 return ;
}

Dog::Dog(const Dog& copy)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->type = copy.type;
}

Dog& Dog::operator=(const Dog& copy)
{
    this->type = copy.type;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "WAAAAAAAAAAAAAFFFFFFFFFFFF WAFFFFFFF" << std::endl;
    return ;
}