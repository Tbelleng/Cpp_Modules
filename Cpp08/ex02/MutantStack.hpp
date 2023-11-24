/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:04:05 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/13 16:55:49 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <climits>
#include <iterator>

template <class T>
class MutantStack : public std::stack<T> //public std::list<T>
{
	private :
	
	public :
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	
	MutantStack(void) {};
	~MutantStack(void) {};
    MutantStack(const MutantStack& copy) 
    {
        this->c = copy.c;
    };
    MutantStack& operator=(const MutantStack& copy) 
    {
        if (this != &copy) 
            this->c = copy.c;
        return *this;
    };
    iterator begin(void)
    {
        return this->c.begin();
    }
    iterator end(void)
    {
        return this->c.end();
    }
};



#endif