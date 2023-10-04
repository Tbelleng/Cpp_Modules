/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:33:31 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/17 16:55:50 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *foo = new Zombie[N];
    if (foo == nullptr)
		return nullptr;
    int i = 0;
    
    while (i < N)
    {
        foo[i].setname(name);
        foo[i].announce();
        i++;
    }
    
    return (foo);
}