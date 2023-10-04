/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:17:33 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/21 14:47:49 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string blaze)
{
    std::cout << "FragTrap Constructor called" << std::endl;
    this->Name = blaze;
    this->Hit_point = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
    return ;
}

FragTrap::~FragTrap(void)
{
 std::cout << "FragTrap Destructor called" << std::endl;
 return ;
}

void FragTrap::attack(const std::string& target)
{
    if (this->Energy_point > 0 && this->Hit_point > 0)
    {
        std::cout << "FragTrap " << this->Name << " attacks " << target << " causing " << this->Attack_damage << " points of damage!" << std::endl;
        this->Energy_point--;
    }
    else
        std::cout << "FragTrap got No Energy/Hp anymore..." << std::endl;
    return ;
}

FragTrap::FragTrap(const FragTrap& copy)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    this->Name = copy.Name;
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
    this->Name = copy.Name;
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    int five = 0;
    std::cout << "Give me five, my G: ";
    while (five != 5)
    {
        std::cin >> five;
        while (!(std::cin >> five))
        {
            std::cout << "damn i said five...no problem...next time" << std::endl;
            return ;
        }
    }
    if (five == 5)
        std::cout << "you got this !" << std::endl;
    return ;   
}