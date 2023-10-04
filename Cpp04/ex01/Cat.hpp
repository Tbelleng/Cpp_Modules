/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:42:31 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/22 00:27:59 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp" 
# include "Brain.hpp"

class Cat : public Animal
{
    private :

    Brain* whole_brain;

    public :
    
    Cat(void);
    ~Cat(void);
    Cat(const Cat& copy);
    Cat& operator=(const Cat& copy);
    void makeSound(void) const;
};

#endif