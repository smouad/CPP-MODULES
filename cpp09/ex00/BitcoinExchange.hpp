/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:26:36 by msodor            #+#    #+#             */
/*   Updated: 2023/10/17 18:44:27 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>

class BitcoinExchange
{
public:
	BitcoinExchange();
	~BitcoinExchange();
	// BitcoinExchange(const BitcoinExchange& src);
	// BitcoinExchange& operator=(const BitcoinExchange& src);
	void fillTable();
private:
	std::map<std::string, double> exchangeTable;
	std::ifstream dataBase;
};


#endif