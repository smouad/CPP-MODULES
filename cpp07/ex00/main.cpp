/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:45:28 by msodor            #+#    #+#             */
/*   Updated: 2023/10/13 18:51:01 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

template <typename T>
void	swap(T& a, T& b){
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T max(T a, T b){
	return (a > b ? a : b);
}

template <typename T>
T min(T a, T b){
	return (a < b ? a : b);
}

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl; // a = 3, b = 2
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl; // min( a, b ) = 2
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl; // max( a, b ) = 3
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl; // c = chaine2, d = chaine1
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl; // min( c, d ) = chaine1
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl; // max( c, d ) = chaine2
	return 0;
}
