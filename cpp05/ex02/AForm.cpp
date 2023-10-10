/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:21:28 by msodor            #+#    #+#             */
/*   Updated: 2023/10/10 00:14:00 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name("Default"), gradeToSign(150), gradeToExecute(150){
}

Form::Form(std::string const name, int gradeToSign, int gradeToExecute):name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute){
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	else{
		this->isSigned = false;
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

bool Form::getIsSigned() const{
  return (this->isSigned);
}

void Form::beSigned(Bureaucrat &bureaucrat){
  if (bureaucrat.getGrade() > this->gradeToSign)
    throw Form::GradeTooLowException();
  else
    this->isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const Form &src){
  os << "Form name: " << src.getName() << std::endl;
  os << "Form grade to sign: " << src.getGradeToSign() << std::endl;
  os << "Form grade to execute: " << src.getGradeToExecute() << std::endl;
  if (src.getIsSigned() == true)
    os << "Form is signed" << std::endl;
  else
    os << "Form is not signed" << std::endl;
  return (os);
}

const char* Form::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}