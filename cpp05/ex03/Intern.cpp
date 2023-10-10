/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:13:33 by msodor            #+#    #+#             */
/*   Updated: 2023/10/10 18:49:51 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){ }

Intern::Intern(const Intern& src){
	if (this != &src)
		*this = src;
}

Intern& Intern::operator=(const Intern& src){
	if (this != &src)
		*this = src;
	return (*this);
}

Intern::~Intern(){ }

AForm* Intern::createShrubberyCreationForm(std::string const &target){
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::createPresidentialPardonForm(std::string const &target){
	return (new PresidentialPardonForm(target));
}

AForm* Intern::createRobotomyRequestForm(std::string const &target){
	return (new RobotomyRequestForm(target));
}

AForm* Intern::makeForm(std::string const &formName, std::string const &target){
	AForm* form[3] = {
		createShrubberyCreationForm(target),
		createPresidentialPardonForm(target),
		createRobotomyRequestForm(target)
	};
	std::string formNames[3] = {
		"ShrubberyCreationForm",
		"PresidentialPardonForm",
		"RobotomyRequestForm"
	};
	for (int i = 0; i < 3; i++){
		if (formNames[i] == formName){
			std::cout << "Intern creates " << formName << std::endl;
			return (form[i]);
		}
	}
	return (NULL);
}
