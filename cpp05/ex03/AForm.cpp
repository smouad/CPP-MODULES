/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:21:28 by msodor            #+#    #+#             */
/*   Updated: 2023/10/10 00:14:00 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():name("Default"), gradeToSign(150), gradeToExecute(150){
}

AForm::AForm(std::string const name, int gradeToSign, int gradeToExecute):name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute){
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	else{
		this->isSigned = false;
	}
}

AForm::AForm(const AForm &src):name(src.name), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute){
	if (this != &src)
		*this = src;
}

AForm &AForm::operator=(const AForm &src){
	if (this != &src){
		this->isSigned = src.isSigned;
	}
	return (*this);
}

AForm::~AForm(){}

std::string AForm::getName() const{
	return (this->name);
}

int AForm::getGradeToSign() const{
	return (this->gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

bool AForm::getIsSigned() const{
  return (this->isSigned);
}

void AForm::beSigned(Bureaucrat &bureaucrat){
  if (bureaucrat.getGrade() > this->gradeToSign)
    throw AForm::GradeTooLowException();
  else
    this->isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const AForm &src){
  os << "AForm name: " << src.getName() << std::endl;
  os << "AForm grade to sign: " << src.getGradeToSign() << std::endl;
  os << "AForm grade to execute: " << src.getGradeToExecute() << std::endl;
  if (src.getIsSigned() == true)
    os << "AForm is signed" << std::endl;
  else
    os << "AForm is not signed" << std::endl;
  return (os);
}

const char* AForm::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

const char* AForm::FormNotSignedException::what() const throw(){
	return ("Form is not signed");
}