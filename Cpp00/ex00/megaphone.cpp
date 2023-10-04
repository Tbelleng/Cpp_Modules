/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:47:52 by tbelleng          #+#    #+#             */
/*   Updated: 2023/06/06 16:47:54 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main(int argc, char **argv)
{
    int i;

    i = 1; 
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < argc) 
        {
            for (int j = 0; argv[i][j] != '\0'; j++) 
            {
                argv[i][j] = std::toupper(argv[i][j]);
            }
            std::cout << argv[i] << std::endl;
            i++;
        }
    }
    return (0);
}    
