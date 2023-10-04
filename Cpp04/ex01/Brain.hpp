/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 23:47:00 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/22 00:40:42 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <stdlib.h>
# include <cstring>

class Brain
{
    protected :

    std::string ideas[100];

    public :

    Brain(void);
    Brain(std::string which);
    virtual ~Brain(void);
    Brain(const Brain& copy);
    Brain& operator=(const Brain& copy);
};




#endif 