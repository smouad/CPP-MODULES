/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:09:59 by msodor            #+#    #+#             */
/*   Updated: 2023/09/05 20:50:41 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string wReplace(std::string line, std::string toFind, std::string toReplace)
{
	size_t index;
	size_t len;

	len = toFind.length();
	index = line.find(toFind);
	while(index != std::string::npos)
	{
		line.erase(index, len);
		line.insert(index, toReplace);
		index = line.find(toFind);
	}
	return (line);
}

int main(int ac, char **av)
{
	std::string fileName(av[1]);
	if (ac != 4){
		return (1);
		std::cout << "wrong number of argument" << std::endl;
	}

	std::fstream inFile(fileName);
	if (!inFile){
		std::cout << "Error opening file" << fileName << std::endl;
		return (1);
	}

	std::ofstream outFile(fileName + ".replace");
	if (!outFile){
		std::cout << "Error opening file" << fileName + ".replace" << std::endl;
		return (1);
	}
	std::string line;

	while(std::getline(inFile ,line))
	{
		outFile << wReplace(line, av[2], av[3]);
		if (!inFile.eof() && !line.empty())
			outFile << std::endl;
	}
  inFile.close();
  outFile.close();
	return (0);
}
