/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:10:21 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/14 18:44:13 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Ici on va prendre les datas du files pour les stocker dans data et apres on refait la meme fonction pour le input.txt
void BitcoinExchange::getting_csv(void)
{
	 std::ifstream dataFile("data.csv");

    if (!dataFile.is_open()) {
        std::cerr << "Error: Unable to open the file." << std::endl;
        return ;
    }

    std::string line;
    while (getline(dataFile, line)) 
    {
        size_t commaPos = line.find(',');

        if (commaPos == std::string::npos) 
        {
            std::cerr << "Error: Invalid line format: " << line << std::endl;
            continue;
        }
        std::string dateString = line.substr(0, commaPos);
        std::string valueString = line.substr(commaPos + 1);
        
        double value;
        std::istringstream iss(valueString);
        if (!(iss >> value)) {
            //std::cerr << "Error: Invalid value format in line: " << line << std::endl;
            continue;
        }

        this->data[dateString] = value;
    }

    dataFile.close();
    /*
    for (std::map<std::string, double>::iterator it = this->data.begin(); it != this->data.end(); ++it) 
	{
        std::cout << "Date: " << it->first << ", Value: " << it->second << std::endl;
	}
	*/
	return ;
}

void BitcoinExchange::printing(void)
{
    for (std::map<std::string, double>::iterator it = this->input.begin(); it != this->input.end(); ++it) 
	{
        std::cout << "Date: " << it->first << ", Value: " << it->second << std::endl;
        /*const std::type_info& valueType = typeid(it->second);
        std::cout << "Type of it->second: " << valueType.name() << std::endl;*/
	}
}

bool BitcoinExchange::isValidDate(const std::string& dateStr) 
{
    std::regex dateRegex("^\\d{4}-\\d{2}-\\d{2}$");

    // Check if the dateStr matches the regex
    return std::regex_match(dateStr, dateRegex);
}

void BitcoinExchange::getting_txt(char* argv)
{
    std::ifstream inputFile(argv);
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file " << argv[1] << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::string dateStr;
        double value;
        if (std::getline(iss, dateStr, '|') && iss >> value) 
        {
            size_t first = dateStr.find_first_not_of(" \t");
            size_t last = dateStr.find_last_not_of(" \t");
            if (first != std::string::npos && last != std::string::npos) {
                dateStr = dateStr.substr(first, last - first + 1);
            } else {
                std::cerr << "Invalid date format: " << dateStr << std::endl;
                continue;
            }
            if (!isValidDate(dateStr)) {
                std::cerr << "Invalid date: " << dateStr << std::endl;
                continue;
            }
            //std::cout << "New line added from input file" << std::endl;
            input[dateStr] = value;
        } else {
            std::cerr << "Invalid line format: " << line << std::endl;
        }
    }

    inputFile.close();
}


BitcoinExchange::BitcoinExchange(void)
{
	return ;
}

BitcoinExchange::~BitcoinExchange(void)
{


}

double BitcoinExchange::pricing(const std::string& date, double amount) 
{
    // Check if the date exists in the data map
    std::map<std::string, double>::iterator dataIt = data.find(date);

    if (dataIt != data.end()) {
        // Exact date found, use the corresponding value
        return dataIt->second * amount;
    } else {
        // Date not found, find the closest date
        dataIt = data.lower_bound(date);

        if (dataIt == data.begin()) {
            // No earlier date found, use the first date
            return data.begin()->second * amount;
        } else if (dataIt == data.end()) {
            // No later date found, use the last date
            return data.rbegin()->second * amount;
        } else {
            // Interpolate between two closest dates
            std::map<std::string, double>::iterator prevDataIt = std::prev(dataIt);
            double prevValue = prevDataIt->second;
            double nextValue = dataIt->second;
            double prevDate = std::stod(prevDataIt->first);
            double nextDate = std::stod(dataIt->first);
            double inputDate = std::stod(date);

            double interpolatedValue = prevValue +
                (nextValue - prevValue) * (inputDate - prevDate) / (nextDate - prevDate);

            return interpolatedValue * amount;
        }
    }
}

void BitcoinExchange::output_price(void)
{
    for (std::map<std::string, double>::iterator it = this->input.begin(); it != this->input.end(); ++it) 
	{
        
	}

}

/*BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	
	
}*/

/*BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& copy)
{
	
	
}*/