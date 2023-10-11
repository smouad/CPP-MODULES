/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:21:24 by msodor            #+#    #+#             */
/*   Updated: 2023/10/10 00:05:23 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm{
private:
	const std::string	name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;
public:
	//canonical Aform
	AForm();
	AForm(std::string const name, int gradeToSign, int gradeToExecute);
	AForm(const AForm& src);
	AForm& operator=(const AForm& src);
	virtual ~AForm();
	//getters
	std::string getName() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
  bool getIsSigned() const;
	//methods
	void beSigned(Bureaucrat& bureaucrat);
	virtual void execute(Bureaucrat const &executor) const = 0;
	//exceptions
	class GradeTooHighException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	class FormNotSignedException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const AForm& src);

#endif