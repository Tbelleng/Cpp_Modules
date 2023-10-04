/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:27:43 by tbelleng          #+#    #+#             */
/*   Updated: 2023/08/03 16:50:57 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal(void)
{
 std::cout << "WrongAnimal Destructor called" << std::endl;
 return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    this->type = copy.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
    this->type = copy.type;
    return *this;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Very Strange Sound" << std::endl;
    return ;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}