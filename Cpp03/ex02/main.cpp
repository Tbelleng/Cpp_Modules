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

int main()
{
    ClapTrap trap("Neo");
    
    trap.attack("target");
    trap.takeDamage(4);
    trap.beRepaired(2);
    trap.takeDamage(10);
    trap.attack("NewTarget");

    std::cout << std::endl << "Time to FragTrap !" << std::endl;
    FragTrap flag("trinity");

    flag.attack("target 2");
    flag.beRepaired(5);
    flag.highFivesGuys();
        
    return 0;
}