/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:48:29 by msodor            #+#    #+#             */
/*   Updated: 2023/10/19 00:33:41 by msodor           ###   ########.fr       */
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
	std::ifstream inFile(inputFile.c_str());
  if (!inFile.is_open()){
    std::cout << "Error: could not open file." << std::endl;
    return ;
  }
	std::string line;
	std::string date;
	double value;
	
	std::getline(inFile, line);
	while (std::getline(inFile, line)){	
		size_t pipePos = line.find('|');
		if (pipePos == std::string::npos){
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		date = line.substr(0, pipePos - 1);
    if (checkValidDate(date)){
      std::cout << "Error: bad input => " << date << std::endl;
      continue;
	  }
    value = std::strtod(line.substr(pipePos + 1).c_str(), NULL);
    if (value <= 0){
      std::cout << "Error: not a positive number." << std::endl;
      continue;
    }
    if (value > 1000){
      std::cout << "Error: too large number." << std::endl;
      continue;
    }
    std::map<std::string, double>::iterator it = exchangeTable.lower_bound(date);
    if (it == exchangeTable.end()){
      std::cout << "Error: no data found for this date." << std::endl;
      continue;
    }
    if (it->first != date)
      it--;
    std::cout << date << " => " << value << " = " << value * it->second << std::endl;
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

  if (!(mValue >= 1 && mValue <= 12))
    return 1;
  if (!(dValue >= 1 && dValue <= 31))
    return 1;
  return (0);
}
