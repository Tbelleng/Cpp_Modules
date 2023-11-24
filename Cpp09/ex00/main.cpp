/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:10:26 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/14 17:21:56 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return (0);
    }
    BitcoinExchange* btc = new BitcoinExchange();
    
    btc->getting_csv();
    btc->getting_txt(argv[1]);

    btc->printing();

    delete (btc);
    return (0);
}