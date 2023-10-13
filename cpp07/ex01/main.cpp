/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:24:15 by msodor            #+#    #+#             */
/*   Updated: 2023/10/13 18:57:29 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename A, typename F>
void	iter(A &array, int length, F func){
	for (int i = 0; i < length; i++)
		func(array[i]);
}

template <typename T>
void	print(T a){
	std::cout << a << std::endl;
}

int main( void ) {
	int tab[] = { 0, 1, 2, 3, 4 };
	char tab2[6] = "Hello";
	iter(tab, 5, print<int>);
	std::cout << std::endl;
	iter(tab2, 5, print<char>);
	return 0;
}