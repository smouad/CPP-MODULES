/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:05:13 by msodor            #+#    #+#             */
/*   Updated: 2023/10/11 15:41:44 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
	this->target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5){
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):AForm(src){
	if (this != &src)
		*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(){ }

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src){
	if (this != &src)
		this->target = src.target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else if (this->getIsSigned() == false)
		throw AForm::FormNotSignedException();
	else
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
