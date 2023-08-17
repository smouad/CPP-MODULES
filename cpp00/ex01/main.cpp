/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:41:00 by msodor            #+#    #+#             */
/*   Updated: 2023/08/14 16:32:06 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;

	std::string command;
	while (1)
	{
		std::cout << "Enter your command: ";
		std::cin >> command;
		if (command == "ADD")
		{
			phoneBook.addToPhoneBook();
		}
		else if (command == "SEARCH")
		{
			phoneBook.searchContact();
		}
		else if (command == "EXIT")
			break ;
	}
}