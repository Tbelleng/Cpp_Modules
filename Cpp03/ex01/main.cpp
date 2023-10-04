/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:46:23 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/21 14:43:00 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main()
{
    ClapTrap trap("Neo");
    
    trap.attack("target");
    trap.takeDamage(4);
    trap.beRepaired(2);
    trap.takeDamage(10);
    trap.attack("NewTarget");

    std::cout << std::endl << "Time to ScavTrap !" << std::endl;
    ScavTrap scav("trinity");

    scav.attack("target 2");
    scav.beRepaired(5);
    scav.guardGate();
    
    ScavTrap _new(scav);
        
    return 0;
}