/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 22:44:52 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/14 22:47:42 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_HPP_
#define _HARL_HPP_
#include <iostream>
#include <string>

class Harl
{
    private:
    
        std::string harl_function[4];
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        
    public:
    
        Harl(void);
		int complain(std::string level);
        int choice(std::string level);
};

#endif