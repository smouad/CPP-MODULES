/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:26:36 by msodor            #+#    #+#             */
/*   Updated: 2023/10/18 16:51:33 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <ctime>
#include <exception>

class BitcoinExchange
{
public:
  // methods
	void fillTable();
	void getChange(std::string inputFile);
	int	checkValidDate(std::string date);

	//exceptions
	class InvalidDate : public std::exception{
		const char* what() const throw();
	};
  
  // canonical form
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& src);
	BitcoinExchange& operator=(const BitcoinExchange& src);
private:
	std::map<std::string, double> exchangeTable;
};


#endif