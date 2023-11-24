/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:49:17 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/12 14:25:32 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

template < typename T >
	bool easyfind(const T& container, int to_find) 
	{
    auto it = std::find(container.begin(), container.end(), to_find);
    return it != container.end();
	}


#endif