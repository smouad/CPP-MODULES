/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:48:29 by msodor            #+#    #+#             */
/*   Updated: 2023/10/18 01:50:42 by msodor           ###   ########.fr       */
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
  std::ifstream file("data.csv");
  // declare the map and the string to read the file
  std::map<std::string, double> exchangeTable;
  std::string line;
  // read the file line by line
  int i = 0;
  std::getline(file, line);
  while (std::getline(file, line)){
    std::stringstream ss(line);
    std::string date;
    std::string price;
    char* endPtr; // declare endPtr variable and initialize it to nullptr
    
    std::getline(ss, date, ',');
    std::getline(ss, price, ',');
    // insert the date and price in the map
    exchangeTable.insert(std::pair<std::string, double>(date, std::strtod(price.c_str(), &endPtr)));
    // exchangeTable.insert(date, std::stod(price));
  }
}