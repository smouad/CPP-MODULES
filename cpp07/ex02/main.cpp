/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 21:37:08 by msodor            #+#    #+#             */
/*   Updated: 2023/10/14 12:48:25 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(){
	Array<int> a(5);
	Array<std::string> b(5);

	for (int i = 0; i < 5; i++){
		a[i] = i;
	}

	b[0] = "hello";
	b[1] = "world";
	b[2] = "this";
	b[3] = "is";
	b[4] = "me";
	
	std::cout << "a: ";
	for (int i = 0; i < 5; i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;
	std::cout << "b: ";
	for (int i = 0; i < 5; i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;
}