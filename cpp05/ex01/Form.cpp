/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:21:28 by msodor            #+#    #+#             */
/*   Updated: 2023/10/09 23:29:58 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name("Default"), gradeToSign(150), gradeToExecute(150){
}

Form::Form(std::string const name, int gradeToSign, int gradeToExecute){
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	else{
		this->name = name;
		this->isSigned = false;
		this->gradeToSign = gradeToSign;
		this->gradeToExecute = gradeToExecute;
	}
}

Form::Form(const Form &src):name(src.name), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute){
	if (this != &src)
		*this = src;
}

Form &Form::operator=(const Form &src){
	if (this != &src){
		this->isSigned = src.isSigned;
	}
	return (*this);
}

Form::~Form(){}

std::string Form::getName() const{
	return (this->name);
}

int Form::getGradeToSign() const{
	return (this->gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

void Form::beSigned(Bureaucrat &bureaucrat){
}

std::ostream &operator<<(std::ostream &os, const Form &src){

}


const char* Form::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}