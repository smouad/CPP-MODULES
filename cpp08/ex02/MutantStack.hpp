/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 01:12:24 by msodor            #+#    #+#             */
/*   Updated: 2023/10/16 16:31:13 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>{
public:
  MutantStack();
  MutantStack(const MutantStack& src);
  MutantStack<T>& operator=(const MutantStack& src);
  ~MutantStack(){}

  typedef typename std::stack<T>::container_type::iterator iterator;
  iterator begin(){ return this->c.begin(); }
  iterator end(){ return this->c.end(); }
};

template <typename T>
MutantStack<T>::MutantStack(){}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& src){
  *this = src;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& src){
  if (this != &src){ (void)src; }
  return (*this);
}


#endif