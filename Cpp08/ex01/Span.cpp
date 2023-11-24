/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:34:08 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/13 15:02:38 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n)
{
	this->max = n;
	this->count = 1;
	vec = std::vector<int>(0);
	return ;
}

Span::~Span()
{
	return ;
}

Span::Span(const Span& copy)
{
	
	return ;
}

Span& Span::operator=(const Span& copy)
{
	
	return (*this);
}

void Span::addNumber(int added)
{
	if (this->get_count() <= this->get_max())
	{
		this->vec.push_back(added);
		this->count++;
		return ;
	}
	else
		throw Span::MaxReached();
	return ;
}

int Span::shortestSpan(void)
{
    std::sort(this->vec.begin(), this->vec.end());

    int shortest = INT_MAX;

    for (size_t i = 1; i < this->vec.size(); ++i) {
        int span = this->vec[i] - this->vec[i - 1];
        if (span < shortest) 
        {
            shortest = span;
        }
    }
    return shortest;
}

int Span::longestSpan(void)
{
    std::sort(this->vec.begin(), this->vec.end());

    int longest = 0;

    for (size_t i = 0; i < this->vec.size(); ++i) {
        for (size_t j = i + 1; j < this->vec.size(); ++j) {
            int span = std::abs(this->vec[i] - this->vec[j]);
            if (span > longest) {
                longest = span;
            }
        }
    }
    return longest;
}

int Span::get_max(void)
{
	return (this->max);
}

unsigned int Span::get_count(void)
{
	return (this->count);
}

void Span::cheat_add(const std::vector<int>& values)
{
    unsigned int sizze = values.size();
    if ((this->count + sizze) >= this->max)
    {
        throw Span::MaxReached();
    }
    auto beginChunk = std::begin(values);
    auto endChunk = std::end(values);

    this->vec.insert(this->vec.end(), beginChunk, endChunk);
}


const char* Span::MaxReached::what() const throw()
{
	return "Maximum already reached";
}