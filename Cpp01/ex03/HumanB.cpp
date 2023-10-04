/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:30:06 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/01 16:21:25 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string blaze)
{
    this->name = blaze;
    this->club = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& neww)
{
    this->club = &neww;
}

void HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->club->getType() << std::endl;
}