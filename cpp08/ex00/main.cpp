/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:08:36 by msodor            #+#    #+#             */
/*   Updated: 2023/10/16 15:25:58 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main(){
	std::vector<int> intVector;
	intVector.push_back(32);
	intVector.push_back(1);
	intVector.push_back(3);
	intVector.push_back(2);
	intVector.push_back(29);
	intVector.push_back(36);
	
	try{
		std::cout << easyfind(intVector, 3) << std::endl;
		std::cout << easyfind(intVector, 100) << std::endl;
	}
	catch(std::exception& ex){
		std::cout << "Element not found" << std::endl;
	}
}