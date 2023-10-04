/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:59:20 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/19 17:27:41 by tbelleng         ###   ########.fr       */
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
    static const float epsilon;
    
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
    
    Fixed operator++ (int);
    Fixed operator-- (int);
    Fixed& operator++(void);
    Fixed& operator--(void);
    
    Fixed& operator+(const Fixed& copy);
    Fixed& operator-(const Fixed& copy);
    Fixed& operator*(const Fixed& copy);
    Fixed& operator/(const Fixed& copy);
    
    static const Fixed& min(const Fixed& first, const Fixed& second)
    {
        if (first >= second)
            return second;
        else
            return first;
    };
    
    static Fixed& min( Fixed& first,  Fixed& second)
    {
        if (first >= second)
            return second;
        else
            return first;
    };
    
    static const Fixed& max(const Fixed& first, const Fixed& second)
    {
        if (first >= second)
            return first;
        else
            return second;
    };
    
    static Fixed& max(Fixed& first, Fixed& second)
    {
        if (first >= second)
            return first;
        else
            return second;
    };
    
    bool operator< (const Fixed& first) const
    { 
        return this->getRawBits() < first.getRawBits(); 
    }
    bool operator> (const Fixed& first) const
    { 
        return this->getRawBits() > first.getRawBits(); 
    }
    bool operator<=(const Fixed& first) const
    {
        return !(this->getRawBits() > first.getRawBits());
    }
    bool operator>=(const Fixed& first) const
    {
        return !(this->getRawBits() < first.getRawBits());
    }
    bool operator==(const Fixed& first) const
    {
        return this->getRawBits() == first.getRawBits();
    }
    bool operator!=(const Fixed& first) const
    {
        return !(this->getRawBits() == first.getRawBits());
    }
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);

#endif