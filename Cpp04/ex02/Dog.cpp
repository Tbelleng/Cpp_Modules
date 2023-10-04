/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:42:33 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/22 00:54:33 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->whole_brain = new Brain();
    return ;
}

Dog::~Dog(void)
{
    delete (whole_brain);
    std::cout << "Dog Destructor called" << std::endl;
    return ;
}

Dog::Dog(const Dog& copy)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->type = copy.type;
    this->whole_brain = copy.whole_brain;
}

Dog& Dog::operator=(const Dog& copy)
{
    this->type = copy.type;
    this->whole_brain = copy.whole_brain;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "WAAAAAAAAAAAAAFFFFFFFFFFFF WAFFFFFFF" << std::endl;
    return ;
}