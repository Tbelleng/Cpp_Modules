/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:08:58 by tbelleng          #+#    #+#             */
/*   Updated: 2023/11/14 19:15:48 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template < typename T>
	void swap (T &x, T &y) {
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template < typename T>
	T min (T &x, T &y) {
	if (x >= y)
		return y;
	else
		return x;
}

template < typename T>
	T max (T &x, T &y) {
	if (y >= x)
		return y;
	else
		return x;
}

#endif