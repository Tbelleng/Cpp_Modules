/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:42:35 by tbelleng          #+#    #+#             */
/*   Updated: 2023/08/03 16:10:21 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp" 

class Dog : public Animal
{
    public :
    
    Dog(void);
    ~Dog(void);
    Dog(const Dog& copy);
    Dog& operator=(const Dog& copy);
    void makeSound(void) const;
};

#endif