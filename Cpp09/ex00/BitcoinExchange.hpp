/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:10:23 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/14 18:25:01 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <map>
#include <climits>
#include <sstream>
#include <regex>

class BitcoinExchange
{
	private :
	
	std::map<std::string, double> data;
	std::map<std::string, double> input;
	
	public :
	
	BitcoinExchange(void);
	~BitcoinExchange(void);
	//BitcoinExchange(const BitcoinExchange& copy);
	//BitcoinExchange& operator=(const BitcoinExchange& copy);
	double pricing(const std::string& date, double amount);
	bool isValidDate(const std::string& dateStr);
	void getting_csv(void);
	void getting_txt(char* argv);
	void printing(void);
	void price_compute(void);
	
};

#endif