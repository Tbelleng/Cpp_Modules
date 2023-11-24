/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:34:10 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/13 14:57:47 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <climits>
#include <iterator>

class Span
{
	private :
	
	unsigned int max;
	unsigned int count;
	std::vector<int> vec;
	
	public :
	
    Span(unsigned int n);
    ~Span();
    Span(const Span& copy);
    Span& operator=(const Span& copy);
    void addNumber(int added);
    int shortestSpan(void);
    int longestSpan(void);
    int get_max(void);
    unsigned int get_count(void);
    void cheat_add(const std::vector<int>& values);
    void printVector(void)
    {
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    class MaxReached: public std::exception 
    {
		virtual const char* what() const throw();
	};

};




#endif