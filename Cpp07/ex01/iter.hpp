/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:51:04 by tbelleng          #+#    #+#             */
/*   Updated: 2023/11/14 19:19:47 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template < typename T, typename Func>
	void iter ( T *add, size_t length, Func func) {
	for (size_t i = 0; i < length; ++i)
	{
        func(add[i]);
	}
}

void printElement(int value) 
{
    std::cout << value << " ";
}


void printChar(std::string value)
{
    std::cout << value << " ";
}

void printfloat(float value) 
{
    std::cout << value << " ";
}

#endif 