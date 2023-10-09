/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:53:18 by msodor            #+#    #+#             */
/*   Updated: 2023/10/09 23:44:33 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat{
private:
	std::string const name;
	int grade;
public:
	//canonical
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const &obj);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &obj);
	//getters
	std::string getName() const;
	int getGrade() const;
	//methods
	void	increment(void);
	void	decrement(void);
  void  signForm(Form& form);
	//exeptions
	class GradeTooHighException : public std::exception {
		public: 
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public: 
			const char* what() const throw();
	};
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& src);
#endif