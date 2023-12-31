/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:59:53 by msodor            #+#    #+#             */
/*   Updated: 2023/09/11 18:38:21 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed(): fixedPoint(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& rhs){
	std::cout << "Copy assignment operator calle" << std::endl;
	if (this != &rhs)
		this->fixedPoint = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;	
}

int Fixed::getRawBits(void) const{	
	std::cout << "getRawBits member function called" << std::endl;	
	return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;	
	this->fixedPoint = raw;
}
