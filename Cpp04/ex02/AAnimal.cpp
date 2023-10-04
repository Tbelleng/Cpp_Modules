/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:42:26 by tbelleng          #+#    #+#             */
/*   Updated: 2023/08/03 16:08:23 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
    std::cout << "AAnimal default constructor called" << std::endl;
    return ;
}

AAnimal::AAnimal(std::string which)
{
    std::cout << "AAnimal Constructor called" << std::endl;
    this->type = which;
    return ;
}

AAnimal::~AAnimal(void)
{
 std::cout << "AAnimal Destructor called" << std::endl;
 return ;
}

AAnimal::AAnimal(const AAnimal& copy)
{
    std::cout << "AAnimal Copy constructor called" << std::endl;
    this->type = copy.type;
}

AAnimal& AAnimal::operator=(const AAnimal& copy)
{
    this->type = copy.type;
    return *this;
}

void AAnimal::makeSound(void) const
{
    std::cout << "No Sound" << std::endl;
    return ;
}

std::string AAnimal::getType(void) const
{
    return (this->type);
}