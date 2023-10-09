/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:53:13 by msodor            #+#    #+#             */
/*   Updated: 2023/10/09 23:45:13 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src):name(src.name){
	if (this != &src)
		*this = src;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src){
	if (this != &src){
		this->grade = src.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName() const{
	return (this->name);
}

int	Bureaucrat::getGrade() const{
	return (this->grade);
}

void Bureaucrat::increment(void){
	if (this->grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade -= 1;
}

void Bureaucrat::decrement(void){
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade too low");
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (os);
}
