/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:41:28 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/19 18:29:48 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const float Fixed::epsilon = 1 / (float)(1 << 8);

Fixed::Fixed(void)
{
    //std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    //std::cout << "Copy constructor called" << std::endl;
    value = copy.getRawBits();
}

Fixed::~Fixed(void)
{
    //std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    //std::cout << "Copy constructor operator called"<< std::endl;
    if (this == &copy)
        return (*this);
    this->value = copy.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed::Fixed(const int int_value)
{
    this->value = (int_value << fractionnal);
}

Fixed::Fixed(const float float_value)
{
    this->value = roundf((float_value * ((float)(1 << fractionnal))));
}

int Fixed::toInt(void) const
{
    int fixed_int;
    fixed_int = this ->value >> fractionnal;
    return roundf(fixed_int);
}

float Fixed::toFloat(void) const
{
    float fixed_float = ((float)this->value / (float)(1 << fractionnal));
    return fixed_float;
}

Fixed Fixed::operator++ (int)
{
    Fixed tmp(*this);

    value++;
    return tmp;
}

Fixed Fixed::operator-- (int)
{
    Fixed tmp(*this);

    value--;
    return tmp;
}

Fixed& Fixed::operator++()
{
    value++;
    return *this;
}

Fixed& Fixed::operator--()
{
    value--;
    return *this;
}

Fixed& Fixed::operator+(const Fixed& copy)
{
    this->value += copy.getRawBits();
    return (*this);
}

Fixed& Fixed::operator-(const Fixed& copy)
{
    this->value -= copy.getRawBits();
    return (*this);
}

Fixed& Fixed::operator*(const Fixed& copy)
{
    value = (value * copy.getRawBits()) >> fractionnal;
    return (*this);
}

Fixed& Fixed::operator/(const Fixed& copy)
{
    value =  (value << fractionnal) / copy.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream& output, const Fixed& fixed)
{
    output << fixed.toFloat();
    return output;
}