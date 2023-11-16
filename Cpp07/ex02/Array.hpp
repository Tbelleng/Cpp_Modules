/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:30:51 by tbelleng          #+#    #+#             */
/*   Updated: 2023/11/15 14:36:51 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <typename T>
class Array
{
	private:
	
		T *array;
		unsigned int _size;

	public:
	
		unsigned int size(void) const
		{
			return _size;
		};
		
		Array(void)
		{
			array = 0;
			_size = 0;
		};
		
		~Array()
		{
			delete[] array;
		};
		
		Array(unsigned int n)
		{
			array = new T[n]();
			_size = n;
		};
		
		Array(const Array<T>& copy)
		{
			_size = copy.size();
			array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				array[i] = copy.array[i];
		};
		
		Array<T>& operator=(const Array<T>& copy)
		{
			if (this != &copy)
			{
				delete[] array;
				array = new T[copy.size()];
				_size = copy.size();
				for (unsigned int i = 0; i < _size; i++)
					array[i] = copy.array[i];
			}
			return *this;
		};
		
		T& operator[](unsigned int pos)
		{
			if (pos >= _size)
				throw std::out_of_range("out of range");
			return array[pos];
		};
		
};

#endif
