/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:48:13 by tbelleng          #+#    #+#             */
/*   Updated: 2023/06/06 16:48:14 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <stdlib.h>
# include <cstring>

class Contact
{
    private:
        int index;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_nb;
        std::string darkest_secret;
    
    public:
        void    new_contact(int neww);
        void    display(int to_display);
        void    specific(int spec);
        int     exist(int exist);
        void    rebuild(const std::string& str);
        Contact(void);
        ~Contact(void);
};

#endif
