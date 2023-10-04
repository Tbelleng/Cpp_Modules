/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:17:48 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/21 14:47:49 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    
public:
    FragTrap(void);
    FragTrap(std::string blaze);
    ~FragTrap();
    FragTrap(const FragTrap& copy);
    void attack(const std::string& target);
    FragTrap& operator=(const FragTrap& copy);
    void highFivesGuys(void);
};

#endif