/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:07:26 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/21 14:39:55 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string blaze)
{
    std::cout << "ScavTrap Constructor called" << std::endl;
    this->Name = blaze;
    this->Hit_point = 100;
    this->Energy_point = 50;
    this->Attack_damage = 20;
    return ;
}

ScavTrap::~ScavTrap(void)
{
 std::cout << "ScavTrap Destructor called" << std::endl;
 return ;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->Energy_point > 0 && this->Hit_point > 0)
    {
        std::cout << "ScavTrap " << this->Name << " attacks " << target << " causing " << this->Attack_damage << " points of damage!" << std::endl;
        this->Energy_point--;
    }
    else
        std::cout << "ScavTrap got No Energy/Hp anymore..." << std::endl;
    return ;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->Name << " enter in guardian mode..." << std::endl;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    this->Name = copy.Name;
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
    this->Name = copy.Name;
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;
    return *this;
}