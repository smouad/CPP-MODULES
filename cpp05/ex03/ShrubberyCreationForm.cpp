#include "ShrubberyCreationForm.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:05:31 by msodor            #+#    #+#             */
/*   Updated: 2023/10/10 16:05:32 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
	this->target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137){
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src){
	if (this != &src)
		*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){ }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src){
	if (this != &src)
		this->target = src.target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (this->getIsSigned() == false || executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else{
		std::ofstream file;
		file.open(this->target + "_shrubbery");
		file << "       _-_" << std::endl;
		file << "    /~~   ~~\\" << std::endl;
		file << " /~~         ~~\\" << std::endl;
		file << "{               }" << std::endl;
		file << " \\  _-     -_  /" << std::endl;
		file << "   ~  \\\\ //  ~" << std::endl;
		file << "_- -   | | _- _" << std::endl;
		file << "	_ -  | |   -_" << std::endl;
		file << std::endl;
		file.close();
	}
}