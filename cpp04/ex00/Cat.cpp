/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:49:18 by msodor            #+#    #+#             */
/*   Updated: 2023/10/07 11:51:25 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& src){
	std::cout << "Cat copy constructor called" << std::endl;
	if (this != &src)
		*this = src;
}

Cat& Cat::operator=(const Cat& src){
	if (this != &src){
		this->type = src.type;
	}
	return (*this);
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "el gato MIAO" << std::endl;
}

std::string Cat::getType() const{
	return (this->type);
}