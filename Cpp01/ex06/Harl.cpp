/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 22:43:06 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/15 16:21:29 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    Harl::harl_function[0] = "DEBUG";
    Harl::harl_function[1] = "INFO";
    Harl::harl_function[2] = "WARNING";
    Harl::harl_function[3] = "ERROR";
}


int Harl::choice(std::string level)
{
    int i = -1;

    while (++i < 4)
    {
        if (harl_function[i].compare(level) == 0)
            return (i);
    }
    return (-1);
}

int Harl::complain(std::string level)
{
    int i = choice(level);
    if (i < 0)
        return (-1);
    switch (i)
    {
        case 0:
            debug();
            info();
            warning();
            error();
            break ;
        case 1:
            info();
            warning();
            error();
            break ;
        case 2:
            warning();
            error();
            break;
        case 3:
            error();
        default:
            break;
    }
    return (0);
}

void Harl::debug(void)
{
    std::cout << "[" "DEBUG" "] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl;
    return ;
}

void Harl::info(void)
{
    std::cout << "[" "INFO" "] I cannot believe adding extra bacon costs more mone You didn't put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
    return ;
}

void Harl::warning(void)
{
    std::cout << "[" "WARNING" "] I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years whereas you started working here since last month"  << std::endl;
    return ;
}
void Harl::error(void)
{
    std::cerr << "[" "ERROR" "] This is unacceptable, I want to speak to the manager now" << std::endl;
    return ;
}