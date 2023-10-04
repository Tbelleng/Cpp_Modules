/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:11:34 by tbelleng          #+#    #+#             */
/*   Updated: 2023/06/29 15:19:44 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <stdlib.h>
# include <cstring>

class   Zombie 
{
	private :
	
	std::string name;

	public :
	
	void announce(void);
	void setname(std::string name);
	Zombie(void);
	~Zombie(void);
	
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif