/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:42:31 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/22 02:02:13 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "AAnimal.hpp" 
# include "Brain.hpp"

class Cat : public AAnimal
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