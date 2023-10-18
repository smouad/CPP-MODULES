/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:48:29 by msodor            #+#    #+#             */
/*   Updated: 2023/10/18 16:54:30 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){ }

BitcoinExchange::~BitcoinExchange(){ }

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src)
{
	*this = src;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src)
{
	if (this != &src){
		this->exchangeTable = src.exchangeTable;
	}
	return (*this);
}

void BitcoinExchange::fillTable()
{
	std::ifstream dFile("data.csv");
	// declare the map and the string to read the file
	std::string line;
	// read the file line by line

	std::getline(dFile, line);
	while (std::getline(dFile, line)){
		std::stringstream ss(line); // make the line as an input stream
		std::string date;
		std::string price;
		char* endPtr;

		std::getline(ss, date, ',');
		std::getline(ss, price, ',');
		// insert the date and price in the map
		this->exchangeTable.insert(std::pair<std::string, double>(date, std::strtod(price.c_str(), &endPtr)));
	}
}

void BitcoinExchange::getChange(std::string inputFile)
{
	std::ifstream inFile(inputFile);
	std::string line;
	std::string date;
	int value;
	
	std::getline(inFile, line);
	while (std::getline(inFile, line)){	
		size_t pipePos = line.find('|');
		if (pipePos == std::string::npos){
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		date = line.substr(0, pipePos - 1);
		
	}
	

}

int	BitcoinExchange::checkValidDate(std::string date)
{
	std::istringstream ss(date);
	std::string year, month, day;
	int yValue, mValue, dValue;

	std::getline(ss, year, '-');
	std::getline(ss, month, '-');
	std::getline(ss, day, '-');

	std::istringstream(year) >> yValue;
	std::istringstream(month) >> mValue;
	std::istringstream(day) >> dValue;
	
	std::tm timeinfo = {};
  timeinfo.tm_year = yValue - 1900;  // Years since 1900
  timeinfo.tm_mon = mValue - 1;     // Months are 0-based (0 = January, 1 = February, etc.)
  timeinfo.tm_mday = dValue;

  // Attempt to convert the tm struct to a time_t value, and check if it's valid
  std::time_t result = std::mktime(&timeinfo);
  return (result != -1);
	
}

const char * BitcoinExchange::InvalidDate::what() const throw()
{
	return ("Date out of data base range");
}
