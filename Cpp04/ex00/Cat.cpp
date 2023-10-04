/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:42:28 by tbelleng          #+#    #+#             */
/*   Updated: 2023/08/03 15:59:20 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    return ;
}

Cat::~Cat(void)
{
 std::cout << "Cat Destructor called" << std::endl;
 return ;
}

Cat::Cat(const Cat& copy)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    this->type = copy.type;
}

Cat& Cat::operator=(const Cat& copy)
{
    this->type = copy.type;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "MIAAAAAAAAA WOUUUUUUUUUUU" << std::endl;
    return ;
}