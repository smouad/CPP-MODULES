/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:21:55 by msodor            #+#    #+#             */
/*   Updated: 2023/10/16 15:18:08 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>


template <typename T>
int easyfind(T container, int toFind){
	typename T::iterator res = std::find(container.begin(), container.end(), toFind);

	if (res == container.end())
		throw std::exception();
	return *res;
}

#endif