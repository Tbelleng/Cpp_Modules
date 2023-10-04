/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:42:28 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/22 00:48:52 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->whole_brain = new Brain();
    return ;
}

Cat::~Cat(void)
{
 delete (whole_brain);
 std::cout << "Cat Destructor called" << std::endl;
 return ;
}

Cat::Cat(const Cat& copy)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    this->type = copy.type;
    this->whole_brain = copy.whole_brain;
}

Cat& Cat::operator=(const Cat& copy)
{
    this->type = copy.type;
    this->whole_brain = copy.whole_brain;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "MIAAAAAAAAA WOUUUUUUUUUUU" << std::endl;
    return ;
}