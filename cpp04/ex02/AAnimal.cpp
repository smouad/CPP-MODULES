/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:04:37 by msodor            #+#    #+#             */
/*   Updated: 2023/10/07 11:56:59 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

Animal::Animal(){
	std::cout << "Animal constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal& src){
	std::cout << "Animal copy constructor called" << std::endl;
	if (this != &src)
		*this = src;
}

Animal& Animal::operator=(const Animal& src){
	if (this != &src){
		this->type = src.type;
	}
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const{
	return (this->type);
}
