/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:29:31 by msodor            #+#    #+#             */
/*   Updated: 2023/10/11 19:35:17 by msodor           ###   ########.fr       */
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
	
}
