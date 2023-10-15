/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:42:21 by msodor            #+#    #+#             */
/*   Updated: 2023/10/15 00:51:32 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class Span {
private:
	std::vector<int> intVector;
	unsigned int N;
public:
	Span();
	Span(unsigned int n);
	Span(const Span& src);
	Span& operator=(const Span& src);
	~Span();

	void addNumber(int);
	int shortestSpan();
	int longestSpan();
  void addInRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	class AlreadyFilledSpan : public std::exception{
	public:
		const char* what() const throw();
	};
	
	class NoSpanFound : public std::exception{
		const char* what() const throw();
	};
};

#endif