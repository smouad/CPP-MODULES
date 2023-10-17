/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:27:13 by msodor            #+#    #+#             */
/*   Updated: 2023/10/16 14:47:25 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
  Span sp = Span(10);
  sp.addNumber(5);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);

  try
  {
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }
  
  std::vector<int>  tmp;
  tmp.push_back(1);
  tmp.push_back(10);
  tmp.push_back(11);
  tmp.push_back(55);
  tmp.push_back(55);
  tmp.push_back(100);

  try{
    sp.addInRange(tmp.begin(), tmp.end());
  }
  catch(const std::exception& e){
    std::cerr << e.what() << std::endl;
  }
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
	return 0;
}
