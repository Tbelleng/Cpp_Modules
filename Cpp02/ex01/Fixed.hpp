/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:59:20 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/19 18:25:53 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private :

    int value;
    const static int fractionnal = 8;
    
    public :

    Fixed(void);
    Fixed(const Fixed& copy);
    Fixed(const int int_value);
    Fixed(const float float_value);
    ~Fixed(void);
    Fixed& operator=(const Fixed& copy);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    
};

std::ostream& operator <<(std::ostream& output, const Fixed& fixed);

#endif