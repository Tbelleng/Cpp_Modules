/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:32:11 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/13 15:03:25 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main()
{
	Span sp = Span(5);
	
	std::vector<int> array = {0, 1, 3, 4, 5};
	
	sp.cheat_add(array);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	//sp.addNumber(11);
	//sp.addNumber(110);
	//sp.addNumber(1100);
	
	//ajouter un try and catch pour pas dumper
	
	sp.printVector();
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return (0);
}

