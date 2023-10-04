/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:30:07 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/01 16:15:59 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
    
    std::string name;
    Weapon *club;

    public:

    HumanB(std::string blaze);
    ~HumanB();
    void attack(void);
    void setWeapon(Weapon& neww);
};



#endif