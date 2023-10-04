/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:30:01 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/01 16:02:54 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string blaze, Weapon& neww)
{
    this->name = blaze;
    this->club = &neww;
}

HumanA::~HumanA()
{
    
}

void HumanA::attack(void)
{
    std::cout << this->name << " attack with their " << this->club->getType() << std::endl;
}