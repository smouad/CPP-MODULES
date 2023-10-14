/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:21:55 by msodor            #+#    #+#             */
/*   Updated: 2023/10/14 18:22:01 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>


template <typename T>
void easyfind(T container, int toFind){
	typename T::iterator res = std::find(container.begin(), container.end(), toFind);
	if (container.end() == res)
		std::cerr << toFind << ": not found on that container" << std::endl;
	else
		std::cout << toFind << ": is found" << std::endl;
}

#endif