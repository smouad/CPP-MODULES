/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:29:31 by msodor            #+#    #+#             */
/*   Updated: 2023/10/12 16:46:54 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

ScalarConverter::ScalarConverter(){ }

ScalarConverter::ScalarConverter(const ScalarConverter &src){
	if (this != &src)
		*this = src;
}

ScalarConverter::~ScalarConverter(){ }

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs){
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

void ScalarConverter::convert(std::string str){
  double d;
  char *endPtr;
	if(str[str.length() - 1] == 'f' && str.length() != 1)
		str.erase(str.length() - 1, 1);
  d = std::strtod(str.c_str(), &endPtr);
	std::cout << std::fixed << std::setprecision(std::find(str.begin(), str.end(), '.') != str.end() ? str.length() - str.find('.') - 1 : 1);

	if (str.length() == 1 && !isdigit(*endPtr) && !isdigit(str[0])){
		std::cout << "char: " << static_cast<char>(str[0]) << std::endl;
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(str[0]) << 'f' << std::endl;
		std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
	}

	else if (*endPtr == '\0'){
		if (!isascii(d))
		  std::cout << "char: " << "impossible" << std::endl;
    else if (!std::isprint(static_cast<char>(d)))
		  std::cout << "char: " << "Non displayable" << std::endl;
    else
		  std::cout << "char: " << '\'' << static_cast<char>(d) << '\'' << std::endl;
		if (d > INT_MAX || d < INT_MIN || d != d)
			std::cout << "int: " << "impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: "  << static_cast<float>(d) << 'f' << std::endl;
		std::cout << "double: "  << static_cast<double>(d) << std::endl;
	}

	else{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "impossible" << std::endl;
		std::cout << "double: " << "impossible" << std::endl;
	}
}
