/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:49:45 by msodor            #+#    #+#             */
/*   Updated: 2023/08/17 20:37:09 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->contactCount = 0;
}
PhoneBook::~PhoneBook(){
}

void PhoneBook::addToPhoneBook()
{
	Contact newContact;

	newContact.addContact();
	this->contacts[this->contactCount % 8] = newContact;
	if (this->contactCount < 8)
		this->contactCount++;
}

std::string PhoneBook::replace(std::string str)
{
	if (str.length() > 9)
		return str.substr(0, 9) + ".";
	else
		return str;
}

void	PhoneBook::printContact(int index)
{
	if (index < contactCount && index >= 0)
	{
		std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
		std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
		std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "Wrong index" << std::endl;
}
void	PhoneBook::searchContact()
{
	int index;

	if (this->contactCount == 0)
		std::cout << "Empety Phone Book" << std::endl;
	else{
		std::cout << "+-------------------------------------------+" << std::endl;
		std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "|" << std::endl;
		std::cout << "+-------------------------------------------+" << std::endl;
		for (int i = 0; i < this->contactCount; i++){
			std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << replace(contacts[i].getFirstName()) << "|" << std::setw(10) << replace(contacts[i].getLastName()) << "|" << std::setw(10) << (contacts[i].getNickname()) << "|" << std::endl;
			std::cout << "+-------------------------------------------+" << std::endl;
		}
	}
	std::cout << "Enter index to search: ";
	std::cin >> index;
	printContact(index);
}