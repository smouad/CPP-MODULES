/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:29:31 by msodor            #+#    #+#             */
/*   Updated: 2023/10/11 23:14:07 by msodor           ###   ########.fr       */
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
  d = std::strtod(str.c_str(), &endPtr);
  if (*endPtr == '\0' && isdigit(d)){
    std::cout << "char: " << static_cast<char>(d) << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << "float: " << static_cast<float>(d) << std::endl;
    std::cout << "double: " << static_cast<double>(d) << std::endl;
  }
  else if (str.length() == 1 && !isdigit(d)){
    std::cout << "char: " << static_cast<char>(str[0]) << std::endl;
    std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(str[0]) << std::endl;
    std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
  }
  else if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff"){
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << str << std::endl;
    std::cout << str << std::endl;
  }
}
