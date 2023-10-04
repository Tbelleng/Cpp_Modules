/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:48:34 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/15 15:19:08 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
#include <limits>
#include <cctype>

class Phonebook
{
    private:
        Contact contact_[8];
    public:

    Phonebook(void);
    ~Phonebook(void);
    void add(int i);
    void search(void);
};

#endif
