/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:05:11 by msodor            #+#    #+#             */
/*   Updated: 2023/10/11 22:59:58 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

int main(int argc, char **argv){
  if (argc != 2){
    std::cout << "Wrong number of arguments" << std::endl;
    return (0);
  }
  ScalarConverter::convert(argv[1]);
  return (0);
}