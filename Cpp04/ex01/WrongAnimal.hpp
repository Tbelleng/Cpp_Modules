/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:27:45 by tbelleng          #+#    #+#             */
/*   Updated: 2023/08/03 16:43:26 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>
# include <stdlib.h>
# include <cstring>

class WrongAnimal 
{
    protected :

    std::string type;

    public :

    WrongAnimal(void);
    virtual ~WrongAnimal(void);
    WrongAnimal(const WrongAnimal& copy);
    WrongAnimal& operator=(const WrongAnimal& copy);
    void makeSound(void) const;
    std::string getType(void) const;
};


#endif 