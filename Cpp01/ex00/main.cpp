/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:11:40 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/17 13:11:27 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie     *foo;
	std::string tmp;
	
	std::cout << "give a name to this zombie" << std::endl;
	std::cin >> tmp;
	randomChump(tmp);
	foo = newZombie(tmp);
	
	delete foo;

	return (0);
}