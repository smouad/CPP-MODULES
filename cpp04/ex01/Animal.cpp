/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:04:37 by msodor            #+#    #+#             */
/*   Updated: 2023/09/28 13:21:10 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal constructor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal& src){
    std::cout << "Animal copy constructor called" << std::endl;
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

void Animal::makeSound() const{
    std::cout << "Animal: main make animal sound" << std::endl;
}

std::string Animal::getType() const{
    return (this->type);
}
