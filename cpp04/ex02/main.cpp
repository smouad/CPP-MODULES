/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:49:30 by msodor            #+#    #+#             */
/*   Updated: 2023/09/28 13:52:21 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main( void )
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j;//should not create a leak
	// delete i;
	
	const Animal* animals[4];
	for (int i = 0; i < 4; i++){
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for ( int i = 0; i < 4; i++ ) {
			delete animals[i];
	}

	return 0;
}