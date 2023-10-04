/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:40:50 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/17 17:16:18 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stream.hpp"


std::string removeExtension(const std::string& fileName)
{
    size_t lastDotPos = fileName.find_last_of(".");
    if (lastDotPos != std::string::npos)
    {
        return fileName.substr(0, lastDotPos);
    }
    return fileName;
}

void replaceString(std::string& str, const std::string& s1, const std::string& s2) 
{
    if (s1.empty())
        return ;
    std::size_t found = 0;
    std::size_t len = s1.length();
    while ((found = str.find(s1, found)) != std::string::npos)
    {
        str.erase(found, len);
        str.insert(found, s2);
        found += s2.length();
    }
}

int main(int argc, char **argv)
{
    std::ifstream old(argv[1]);
    std::string   text;
    std::string   old_str;
    std::string   new_str;
    std::string   tmp;
    
    if (argc <= 3 || argc > 4)
    {
        std::cout << "Error : Fail because of arguments" << std::endl;
        return (0);
    }
    if (!old.is_open())
    {
        std::cout << "Error : Wrong file or failed to open" << std::endl;
        return (0);
    }
    
    std::string inputFileName(argv[1]);
    std::string outputFileName = removeExtension(inputFileName) + ".replace";
    std::ofstream neww(outputFileName.c_str());
    if (!neww.is_open())
    {
        std::cout << "Error : Output file failed" << std::endl;
        old.close();
        return (0);
    }

    old_str = argv[2];
    new_str = argv[3];
    
    while (std::getline(old, text))
    {
        replaceString(text, old_str, new_str);
        neww << text << std::endl;
    }
        
    old.close();
    neww.close();
    
    return (0);
}