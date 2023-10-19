/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 01:01:31 by msodor            #+#    #+#             */
/*   Updated: 2023/10/19 01:02:04 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
  if (argc != 2){
    std::cout << "Usage: ./rpn \"operation\"" << std::endl;
    return 0;
  }
  Rpn rpn;
  rpn.calculate(argv[1]);
  return 0;
}