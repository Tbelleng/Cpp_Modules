/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:50:30 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/21 14:47:49 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "Diamond Default constructor called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string blaze) : FragTrap(blaze + "_clap_name"), ScavTrap(blaze + "_clap_name")
{
    std::cout << "DiamondTrap Constructor called" << std::endl;
    this->Name = blaze;
    this->Hit_point = 100;
    this->Energy_point = 50;
    this->Attack_damage = 30;
    return ;
}

DiamondTrap::~DiamondTrap(void)
{
 std::cout << "DiamondTrap Destructor called" << std::endl;
 return;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
    if (this != &copy)
    {
        std::cout << "DiamondTrap Copy constructor called" << std::endl;
        this->Name = copy.Name;
        this->Hit_point = copy.Hit_point;
        this->Energy_point = copy.Energy_point;
        this->Attack_damage = copy.Attack_damage;
    }
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
    this->Name = copy.Name;
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;
    return *this;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "My name is " << this->Name << std::endl;
    std::cout << "My Clap Name is " << ClapTrap::Name << std::endl;
    return ;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
    return;    
}