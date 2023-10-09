/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:49:23 by msodor            #+#    #+#             */
/*   Updated: 2023/10/07 11:57:46 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& src){
	std::cout << "Dog copy constructor called" << std::endl;
	if (this != &src)
		*this = src;
}

Dog& Dog::operator=(const Dog& src){
	if (this != &src){
		this->type = src.type;
		this->brain = new Brain();
	}
	return (*this);
}

Dog::~Dog(){
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "el perro GUAU GUAU" << std::endl;
}

std::string Dog::getType() const{
	return (this->type);
}