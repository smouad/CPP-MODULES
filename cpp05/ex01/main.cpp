/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:53:22 by msodor            #+#    #+#             */
/*   Updated: 2023/10/09 16:32:45 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    // Create a bureaucrat with grade 1
    Bureaucrat bureaucrat("John", 1);

    // Test getName and getGrade methods
    std::cout << bureaucrat << std::endl;
    
    // Test copy constructor
    try{
        Bureaucrat bureaucrat2("Alias", -1);
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    try{
        Bureaucrat bureaucrat3("Bob", 151);
    }
    catch (std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;
    }
    // Test increment method
    try{
        bureaucrat.increment();
        std::cout << bureaucrat << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException& e){
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test decrement method
    try{
        bureaucrat.decrement();
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}