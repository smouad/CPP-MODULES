/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 21:41:46 by msodor            #+#    #+#             */
/*   Updated: 2023/10/13 23:14:20 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
private:
  T* array;
  unsigned int size;
public:
  // canonical form
  Array();
  Array(unsigned int n);
  Array(const Array& other);
  Array<T>& operator=(const Array& other);
  T& operator[](unsigned int index);
  ~Array();

  // Subscript operator

  // Size function
  unsigned int size() const;
};

#endif