/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:07:23 by tbelleng          #+#    #+#             */
/*   Updated: 2023/08/02 17:28:17 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    
public:
    ScavTrap(void);
    ScavTrap(std::string blaze);
    ~ScavTrap();
    ScavTrap(const ScavTrap& copy);
    void attack(const std::string& target);
    ScavTrap& operator=(const ScavTrap& copy);
    void guardGate(void);
};

#endif