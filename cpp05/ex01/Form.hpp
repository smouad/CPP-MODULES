/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:21:24 by msodor            #+#    #+#             */
/*   Updated: 2023/10/09 23:38:29 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form{
private:
	const std::string	name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;
public:
	//canonical form
	Form();
	Form(std::string const name, int gradeToSign, int gradeToExecute);
	Form(const Form& src);
	Form& operator=(const Form& src);
	~Form();
	//getters
	std::string getName() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
  bool getIsSigned() const;
	//methods
	void beSigned(Bureaucrat& bureaucrat);
	//exceptions
	class GradeTooHighException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& src);

#endif