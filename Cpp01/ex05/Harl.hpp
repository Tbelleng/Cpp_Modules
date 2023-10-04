/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:40:44 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/03 17:36:41 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl 
{
    private :
    
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    public :

    void complain(std::string level); 
    Harl(void);
    ~Harl(void);

};

#endif