/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:42:20 by tbelleng          #+#    #+#             */
/*   Updated: 2023/08/03 16:15:54 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include <stdlib.h>
# include <cstring>

class Animal 
{
    protected :

    std::string type;

    public :

    Animal(void);
    Animal(std::string which);
    virtual ~Animal(void);
    Animal(const Animal& copy);
    Animal& operator=(const Animal& copy);
    virtual void makeSound(void) const;
    std::string getType(void) const;
};




#endif 