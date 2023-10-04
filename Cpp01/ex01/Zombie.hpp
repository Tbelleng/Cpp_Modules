/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:33:29 by tbelleng          #+#    #+#             */
/*   Updated: 2023/06/29 16:54:07 by tbelleng         ###   ########.fr       */
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

Zombie* zombieHorde(int N, std::string name);

#endif