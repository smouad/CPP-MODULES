/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:59:33 by msodor            #+#    #+#             */
/*   Updated: 2023/10/18 21:16:59 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char** av)
{
  if(ac != 2){
    std::cout << "Error incorrect number of argumments" << std::endl;
    return 1;
  }
  BitcoinExchange exchange;
  exchange.fillTable();
  exchange.getChange(av[1]);
  return (0);
}