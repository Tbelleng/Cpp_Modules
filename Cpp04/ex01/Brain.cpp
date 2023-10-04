/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 23:47:07 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/22 00:46:14 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain Default Destructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	if (this != &copy)
	{
        for (int i = 0; i < 100; ++i) 
        {
            this->ideas[i] = copy.ideas[i];
        }
    }
	return ;
}

Brain& Brain::operator=(const Brain& copy)
{
	if (this != &copy)
	{
        for (int i = 0; i < 100; ++i) 
        {
            this->ideas[i] = copy.ideas[i];
        }
    }
        return *this;
}