/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:59:20 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/19 15:12:46 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private :

    int value;
    const static int fractionnal = 8;
    
    public :

    Fixed(void);
    Fixed(const Fixed& copy);
    ~Fixed(void);
    Fixed& operator=(const Fixed& copy);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    
};

#endif