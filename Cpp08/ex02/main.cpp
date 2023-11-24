/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:04:02 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/13 17:02:37 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	std::cout << "--------------- Using List --------------" << std::endl;
	
	std::list<int> nstack;
	nstack.push_back(5);
	nstack.push_front(17);
	std::cout << nstack.front() << std::endl;
	nstack.pop_front();
	std::cout << nstack.size() << std::endl;
	nstack.push_back(3);
	nstack.push_back(5);
	nstack.push_back(737);

	nstack.push_back(0);
	std::list<int>::iterator itt = nstack.begin();
	std::list<int>::iterator itee = nstack.end();
	++itt;
	--itt;
	while (itt != itee)
	{
		std::cout << *itt << std::endl;
		++itt;
	}
	std::list<int> ss(nstack);
	
	return (0);

}