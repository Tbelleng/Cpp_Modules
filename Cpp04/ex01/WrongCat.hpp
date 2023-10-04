/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:27:51 by tbelleng          #+#    #+#             */
/*   Updated: 2023/08/03 16:44:23 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include "WrongAnimal.hpp" 

class WrongCat : public WrongAnimal
{
    public :
    
    WrongCat(void);
    ~WrongCat(void);
    WrongCat(const WrongCat& copy);
    WrongCat& operator=(const WrongCat& copy);
};

#endif