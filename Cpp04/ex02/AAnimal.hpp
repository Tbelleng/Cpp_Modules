/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:42:20 by tbelleng          #+#    #+#             */
/*   Updated: 2023/08/03 16:15:54 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

# include <iostream>
# include <stdlib.h>
# include <cstring>

class AAnimal 
{
    protected :

    std::string type;

    public :

    AAnimal(void);
    AAnimal(std::string which);
    virtual ~AAnimal(void);
    AAnimal(const AAnimal& copy);
    AAnimal& operator=(const AAnimal& copy);
    virtual void makeSound(void) const = 0;
    std::string getType(void) const;
};




#endif 