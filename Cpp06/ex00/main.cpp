/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:43:27 by tbelleng          #+#    #+#             */
/*   Updated: 2023/11/14 11:22:14 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Scalaire.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "One argument only is needed pls, no more, no less" << std::endl;
        return (0);
    }
    ScalarConverter::convert(argv[1]);

    return (0);
}