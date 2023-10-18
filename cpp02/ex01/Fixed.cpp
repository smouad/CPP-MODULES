/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:22:13 by msodor            #+#    #+#             */
/*   Updated: 2023/09/13 14:05:22 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::bits = 8;

/*constructors*/
Fixed::Fixed(): fixedPoint(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = (value * (1 << bits));
}

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(value * (1 << bits));
}

/*distructor*/

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

/*getters*/

int Fixed::getRawBits(void) const{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

/*setters*/

void Fixed::setRawBits(int const raw){
	// std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

/*methods*/

float Fixed::toFloat(void) const{

	return ((float)(this->fixedPoint / float(1 << bits)));
}

int Fixed::toInt(void) const{
	return (this->fixedPoint >> bits);
}

/*operators*/

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){
	os << fixed.toFloat();
	return (os);
}

Fixed& Fixed::operator=(const Fixed& rhs){
	std::cout << "Copy assignment operator calle" << std::endl;
	if (this != &rhs)
		this->fixedPoint = rhs.getRawBits();
	return (*this);
}

