/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:53:22 by msodor            #+#    #+#             */
/*   Updated: 2023/10/10 18:48:37 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

int main() {
    Intern intern;

    AForm* form1 = intern.makeForm("ShrubberyCreationForm", "Bender");
    AForm* form2 = intern.makeForm("PresidentialPardonForm", "Fry");
    AForm* form3 = intern.makeForm("asd", "Leela");

    if (form1 != nullptr) {
        delete form1;
    }

    if (form2 != nullptr) {
        delete form2;
    }

    if (form3 != nullptr) {
        delete form3;
    }
    return 0;
}