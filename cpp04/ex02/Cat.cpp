/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:49:18 by msodor            #+#    #+#             */
/*   Updated: 2023/09/28 13:20:58 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& src){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat& Cat::operator=(const Cat& src){
    if (this != &src){
        this->type = src.type;
        this->brain = new Brain();
    }
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const{
    std::cout << "el gato MIAO" << std::endl;
}

std::string Cat::getType() const{
    return (this->type);
}