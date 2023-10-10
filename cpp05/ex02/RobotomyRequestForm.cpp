/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:05:25 by msodor            #+#    #+#             */
/*   Updated: 2023/10/10 17:57:03 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
	this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45){
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src){
	if (this != &src)
		*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(){ }

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src){
	if (this != &src)
		this->target = src.target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (this->getIsSigned() == false || executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else{
		std::cout << "Brrrrrrrrrr" << std::endl;
		std::cout << this->target << " has been robotomized successfully 50% of the time." << std::endl;
	}
}
