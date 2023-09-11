/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:53:50 by msodor            #+#    #+#             */
/*   Updated: 2023/09/06 15:53:45 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
	Harl harl;

	if (ac !=2){
		std::cout << "wrong number of argumments" << std::endl;
		return (1);
	}

	harl.complain(av[1]);
}