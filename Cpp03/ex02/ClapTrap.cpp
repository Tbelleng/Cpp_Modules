/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:46:26 by tbelleng          #+#    #+#             */
/*   Updated: 2023/08/02 15:14:13 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string blaze)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
    this->Name = blaze;
    this->Hit_point = 10;
    this->Energy_point = 10;
    this->Attack_damage = 0;
    return ;
}

ClapTrap::~ClapTrap(void)
{
 std::cout << "ClapTrap Destructor called" << std::endl;
 return ;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->Name = copy.Name;
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
    this->Name = copy.Name;
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy_point > 0 && this->Hit_point > 0)
    {
        std::cout << "ClapTrap " << this->Name << " attacks " << target << " causing " << this->Attack_damage << " points of damage!" << std::endl;
        this->Energy_point--;
    }
    else
        std::cout << "No Energy/Hp anymore..." << std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amout)
{
    std::cout << "ClapTrap named " << this->Name << " took " << amout << " damages !" << std::endl;
    this->Hit_point = this->Hit_point - amout;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_point > 0 && this->Hit_point > 0)
    {
        std::cout << "ClapTrap " << this->Name << " recover " << amount << " Hit points !" << std::endl;
        this->Energy_point--;
    }
    else
        std::cout << "No Energy/Hp anymore..." << std::endl;
    return;
}