/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:29:04 by msodor            #+#    #+#             */
/*   Updated: 2023/09/06 13:35:59 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){
	Harl harl;

	std::cout << "[DEBUG]" << std::endl;
	harl.complain("DEBUG");
	std::cout << "[INFO]" << std::endl;
	harl.complain("INFO");
	std::cout << "[ERROR]" << std::endl;
	harl.complain("ERROR");
	std::cout << "[WARNING]" << std::endl;
	harl.complain("WARNING");
}