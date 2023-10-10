/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:13:35 by msodor            #+#    #+#             */
/*   Updated: 2023/10/10 18:39:10 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{
private:
public:
	Intern();
	Intern(const Intern& src);
	Intern& operator=(const Intern& src);
	~Intern();
	AForm* createShrubberyCreationForm(std::string const &target);
	AForm* createPresidentialPardonForm(std::string const &target);
	AForm* createRobotomyRequestForm(std::string const &target);
	AForm* makeForm(std::string const &formName, std::string const &target);
};

#endif