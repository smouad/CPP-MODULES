/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extention.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:57:10 by msodor            #+#    #+#             */
/*   Updated: 2023/10/12 21:30:27 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extention.hpp"

Base* generate(void){
	int nbr = rand() % 3;

	if (nbr == 0)
		return (new A);

	else if (nbr == 1)
		return (new B);

	else if (nbr == 2)
		return (new C);

	return NULL;
}

void identify(Base *p){
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p){
	if (dynamic_cast<A *>(&p))
			std::cout << "A" << std::endl;

	else if (dynamic_cast<B *>(&p))
		std::cout << "B" << std::endl;

	else if (dynamic_cast<C *>(&p))
		std::cout << "C" << std::endl;
}
