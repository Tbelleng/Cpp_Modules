/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:30:04 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/01 16:01:42 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
    
    std::string name;
    Weapon *club;
    
    public:
    
    HumanA(std::string blaze, Weapon& neww);
    ~HumanA();
    void attack(void);
};


#endif