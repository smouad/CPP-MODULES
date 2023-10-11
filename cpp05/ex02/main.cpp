/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:53:22 by msodor            #+#    #+#             */
/*   Updated: 2023/10/11 16:04:19 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat *bureaucrat = new Bureaucrat("Bureaucrat", 6);
    AForm *shrubberyForm = new ShrubberyCreationForm("Home");
    AForm *robotomyForm = new RobotomyRequestForm("Elon Musk");
    AForm *presidentialForm = new PresidentialPardonForm("Joe biden");

    std::cout << *bureaucrat;
    std::cout << *shrubberyForm;
    std::cout << *robotomyForm;
    std::cout << *presidentialForm;

    bureaucrat->signForm(*shrubberyForm);
    bureaucrat->executeForm(*shrubberyForm);

    bureaucrat->signForm(*robotomyForm);
    bureaucrat->executeForm(*robotomyForm);

    bureaucrat->signForm(*presidentialForm);
    bureaucrat->executeForm(*presidentialForm);

    std::cout << *shrubberyForm;
    std::cout << *robotomyForm;
    std::cout << *presidentialForm; 

    delete bureaucrat;
    delete shrubberyForm;
    delete robotomyForm;
    delete presidentialForm;

    return 0;
}