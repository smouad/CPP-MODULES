/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:49:11 by msodor            #+#    #+#             */
/*   Updated: 2023/08/17 13:30:23 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>

class PhoneBook
{
private:
	Contact	contacts[8];
	int			contactCount;
public:
	PhoneBook();
	~PhoneBook();
	void				addToPhoneBook();
	void				searchContact();
	std::string replace(std::string str);
	void				printContact(int index);
};

#endif