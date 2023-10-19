/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 00:17:18 by msodor            #+#    #+#             */
/*   Updated: 2023/10/19 01:07:07 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <algorithm>
#include <string>

class Rpn{
public:
  //public methods
  void calculate(std::string operation);
  
  //canonical form
  Rpn();
  ~Rpn();
  Rpn(const Rpn& src);
  Rpn& operator=(const Rpn& src);
private:
  std::stack<int> rpn;
};

#endif