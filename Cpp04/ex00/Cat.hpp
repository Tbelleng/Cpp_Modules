/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:42:31 by tbelleng          #+#    #+#             */
/*   Updated: 2023/08/03 15:59:28 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp" 

class Cat : public Animal
{
    public :
    
    Cat(void);
    ~Cat(void);
    Cat(const Cat& copy);
    Cat& operator=(const Cat& copy);
    void makeSound(void) const;
};

#endif