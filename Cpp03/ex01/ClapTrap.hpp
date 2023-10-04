/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:46:19 by tbelleng          #+#    #+#             */
/*   Updated: 2023/08/03 14:46:16 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <stdlib.h>
# include <cstring>

class ClapTrap
{
    protected :
    
    std::string Name;
    int Hit_point;
    int Energy_point;
    int Attack_damage;
        
    public :
    
    ClapTrap(void);
    ClapTrap(std::string blaze);
    ~ClapTrap(void);
    ClapTrap(const ClapTrap& copy);
    ClapTrap& operator=(const ClapTrap& copy);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};




#endif