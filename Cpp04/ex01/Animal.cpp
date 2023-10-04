/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:42:26 by tbelleng          #+#    #+#             */
/*   Updated: 2023/08/03 16:08:23 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal default constructor called" << std::endl;
    return ;
}

Animal::Animal(std::string which)
{
    std::cout << "Animal Constructor called" << std::endl;
    this->type = which;
    return ;
}

Animal::~Animal(void)
{
 std::cout << "Animal Destructor called" << std::endl;
 return ;
}

Animal::Animal(const Animal& copy)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    this->type = copy.type;
}

Animal& Animal::operator=(const Animal& copy)
{
    this->type = copy.type;
    return *this;
}

void Animal::makeSound(void) const
{
    std::cout << "No Sound" << std::endl;
    return ;
}

std::string Animal::getType(void) const
{
    return (this->type);
}