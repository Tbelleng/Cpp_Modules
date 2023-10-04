/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:46:23 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/21 14:36:01 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
    ClapTrap trap("Neo");
    trap.attack("target");
    trap.takeDamage(4);
    trap.beRepaired(2);
    trap.takeDamage(10);
    trap.attack("NewTarget");
    
    ClapTrap _new(trap);
    
    return 0;
}