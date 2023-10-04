/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:30:23 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/01 15:51:00 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <stdlib.h>
# include <cstring>

class Weapon
{
    private:
    std::string type;
    
    public:
    
    std::string& getType(void);
    void setType(std::string value);
    
    
    Weapon(std::string gun);
    ~Weapon();
};


#endif