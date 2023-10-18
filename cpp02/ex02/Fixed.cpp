/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:22:13 by msodor            #+#    #+#             */
/*   Updated: 2023/10/18 12:04:23 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::bits = 8;

Fixed::Fixed(): fixedPoint(0){
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src){
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value){
	// std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = (value * (1 << bits));
}

Fixed::Fixed(const float value){
	// std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(value * (1 << bits));
}

Fixed& Fixed::operator=(const Fixed& rhs){
	// std::cout << "Copy assignment operator calle" << std::endl;
	if (this != &rhs)
		this->fixedPoint = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw){
	// std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

float Fixed::toFloat(void) const{
	return ((float)(this->fixedPoint / float(1 << bits)));
}

int Fixed::toInt(void) const{
	return (this->fixedPoint >> bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){
	os << fixed.toFloat();
	return (os);
}

/*coparison operators*/
bool Fixed::operator>(Fixed& rhs){
	return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator>=(Fixed& rhs){
	return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator<(Fixed& rhs){	
	return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator<=(Fixed& rhs){	
	return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator==(Fixed& rhs){
	return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(Fixed& rhs){
	return (this->toFloat() != rhs.toFloat());
}

/*arithmetic operators*/
Fixed Fixed::operator+(const Fixed& rhs){
	Fixed res(this->toFloat() + rhs.toFloat());
	return(res);
}

Fixed Fixed::operator-(const Fixed& rhs){
	Fixed res(this->toFloat() - rhs.toFloat());
	return(res);
}

Fixed Fixed::operator*(const Fixed& rhs){
	Fixed res(this->toFloat() * rhs.toFloat());
	return(res);
}

Fixed Fixed::operator/(const Fixed& rhs){
	Fixed res(this->toFloat() / rhs.toFloat());
	return(res);
}

/*increment/decrement*/
Fixed& Fixed::operator++(){
	this->fixedPoint++;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed temp(*this);
	this->fixedPoint++;
	return (temp);
}

Fixed& Fixed::operator--(){
	this->fixedPoint--;
	return (*this);	
}


Fixed Fixed::operator--(int){
	Fixed temp(*this);
	this->fixedPoint--;
	return (temp);
}

/*min && max*/

Fixed& Fixed::min(Fixed& first, Fixed& second){
	if (first < second)
		return (first);
	return (second);
}

Fixed& Fixed::max(Fixed& first, Fixed& second){	
	if (first > second)
		return (first);
	return (second);
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second){	
	if (first.toFloat() < second.toFloat())
		return (first);
	return (second);
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second){
	if (first.toFloat() > second.toFloat())
		return (first);
	return (second);
}
