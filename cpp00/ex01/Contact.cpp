/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:49:39 by msodor            #+#    #+#             */
/*   Updated: 2023/08/16 12:34:21 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}
std::string	Contact::getFirstName(){
	return (this->FirstName);
}
std::string	Contact::getLastName(){
	return (this->LastName);
}
std::string	Contact::getNickname(){
	return (this->Nickname);
}
std::string	Contact::getPhoneNumber(){
	return (this->PhoneNumber);
}
std::string	Contact::getDarkestSecret(){
	return (this->DarkestSecret);
}

void	Contact::addContact(){
	std::cout << "Enter first name: ";
	std::cin >> this->FirstName;
	std::cout << "Enter last name: ";
	std::cin >> this->LastName;
	std::cout << "Enter nickname: ";
	std::cin >> this->Nickname;
	std::cout << "Enter phone number: ";
	std::cin >> this->PhoneNumber;
	std::cout << "Enter darkest secret: ";
	std::cin >> this->DarkestSecret;
}