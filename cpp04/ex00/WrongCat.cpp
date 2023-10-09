/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:49:39 by msodor            #+#    #+#             */
/*   Updated: 2023/10/07 11:52:28 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src){
	std::cout << "WrongCat copy constructor called" << std::endl;
	if (this != &src)
		*this = src;
}

WrongCat& WrongCat::operator=(const WrongCat& src){
	if (this != &src){
		this->type = src.type;
	}
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "el gato MIAO" << std::endl;
}

std::string WrongCat::getType() const{
	return (this->type);
}