/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:01:25 by msodor            #+#    #+#             */
/*   Updated: 2023/09/27 15:33:35 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& src){
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain& Brain::operator=(const Brain& src){
	if (this != &src){
		for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	}
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}
