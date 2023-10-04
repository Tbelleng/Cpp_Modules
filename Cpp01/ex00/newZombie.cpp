/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:11:42 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/17 16:55:03 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setname(std::string name)
{
	this->name = name;
	return ; 
}

Zombie* newZombie(std::string name)
{
	std::string tmp;
	
	Zombie *NeoZombie = new Zombie();
	if (NeoZombie == nullptr)
		return nullptr;
	NeoZombie->setname(name);
	std::cout << "im an heap zombie" << std::endl;
	NeoZombie->announce();
	return (NeoZombie);
}