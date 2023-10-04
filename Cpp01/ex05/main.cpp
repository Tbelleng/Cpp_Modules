/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:40:47 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/03 17:44:34 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl    foo;
    std::string level;

    std::cout << "Choose a level for Harl : " << std::endl;
    std::cin >> level;
    foo.complain(level);
    std::cout << "Choose a level for Harl : " << std::endl;
    std::cin >> level;
    foo.complain(level);
    std::cout << "Choose a level for Harl : " << std::endl;
    std::cin >> level;
    foo.complain(level);
    return (0);
}