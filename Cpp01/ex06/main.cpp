/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 22:39:05 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/14 22:48:56 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
        
    Harl harll;

    int res = harll.complain(argv[1]);
    if (res == -1)
        std::cout << "Probably complaining about insignificant problem" << std::endl;
    return (0);
}