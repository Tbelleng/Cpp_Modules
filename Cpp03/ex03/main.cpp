/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:46:23 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/21 14:47:49 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "DiamondTrap.hpp"

int main()
{
    ClapTrap trap("Neo");
    
    trap.attack("target");
    trap.takeDamage(4);
    trap.beRepaired(2);
    trap.takeDamage(10);
    trap.attack("NewTarget");

    std::cout << std::endl;
    
    DiamondTrap dia("trinity");
    dia.whoAmI();
    dia.attack("target2");
        
    return 0;
}