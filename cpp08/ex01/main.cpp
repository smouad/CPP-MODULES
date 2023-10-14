/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:27:13 by msodor            #+#    #+#             */
/*   Updated: 2023/10/14 18:40:32 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>

int main()
{
	std::vector<int> intVector;
	intVector.push_back(32);
	intVector.push_back(1);
	intVector.push_back(3);
	intVector.push_back(2);
	intVector.push_back(29);
	std::vector<int> intVector2;
	intVector.push_back(232);
	intVector.push_back(21);
	intVector.push_back(23);
	intVector.push_back(22);
	intVector.push_back(229);

	std::vector<std::vector<int> > vectorOfIntVector;
	vectorOfIntVector.push_back(intVector);
	vectorOfIntVector.push_back(intVector2);
	std::vector<std::vector<int> >::iterator it = vectorOfIntVector.begin();
	while(it != vectorOfIntVector.end())
		it++;

	return 0;
}
