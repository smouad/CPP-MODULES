/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:49:11 by msodor            #+#    #+#             */
/*   Updated: 2023/07/24 15:03:22 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class PhoneBook
{
private:
	int	contacts[8];
public:
	PhoneBook();
	~PhoneBook();
};

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}
#endif