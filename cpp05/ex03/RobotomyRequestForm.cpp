/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:05:25 by msodor            #+#    #+#             */
/*   Updated: 2023/10/11 16:16:37 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
	this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45){
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): AForm(src){
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
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else if (this->getIsSigned() == false)
		throw AForm::FormNotSignedException();
	else{
		std::cout << "Brrrrrrrrrr" << std::endl;
		if (rand() % 2 == 0)
			std::cout << this->target << " has not been robotomized successfully" << std::endl;
		else if (rand() % 2 == 1)
			std::cout << this->target << " has been robotomized successfully" << std::endl;
	}
}
