/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 01:12:20 by msodor            #+#    #+#             */
/*   Updated: 2023/10/16 13:36:44 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> stack;

	stack.push(10);
	stack.push(145);
	stack.push(46);
	stack.push(61);
	stack.push(3);
	
	std::cout << "Top element: " << stack.top() << std::endl;
	std::cout << "Size: " << stack.size() << std::endl;

	std::cout << "Stack begin: " << *stack.begin() << std::endl;
	std::cout << "Stack end: " << *(--stack.end()) << std::endl;

}