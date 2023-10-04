/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:30:14 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/01 15:50:45 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string& Weapon::getType(void)
{
    std::string& neww = this->type;
    return (neww);
}

void Weapon::setType(std::string value)
{
    this->type = value;
    return ;
}


Weapon::Weapon(std::string gun)
{
    this->type = gun;
}

Weapon::~Weapon(void)
{
    
}
