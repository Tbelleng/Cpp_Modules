/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:40:49 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/15 16:18:17 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{   
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
    std::cerr << "[" "ERROR" "] This is unacceptable ! I want to speak to the manager now." << std::endl;
    return ;
}

void Harl::complain(std::string level)
{
    std::string step[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*invok[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    int i = 0;
    while (i < 4)
    {
        if (step[i] == level)
            (this->*invok[i])();
        i++;
    }
    return ;
}