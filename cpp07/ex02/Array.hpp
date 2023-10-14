/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 21:41:46 by msodor            #+#    #+#             */
/*   Updated: 2023/10/14 12:51:50 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
private:
	T* array;
	unsigned int n;
public:
	// canonical form
	Array();
	Array(unsigned int n);
	Array(const Array& src);
	Array<T>& operator=(const Array& src);
	T& operator[](unsigned int index);
	~Array();

	unsigned int size() const;
};

template <typename T>
Array<T>::Array():array(NULL), n(0){}

template <typename T>
Array<T>::Array(unsigned int n){
	this->array = new T[n];
	this->n = n;
}

template <typename T>
Array<T>::Array(const Array &src){
	*this = src;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &src)
{
	if (this != &src){
		this->n = src.n;
	if (this->array)
		delete[] this->array;
	this->array = new T[src.n];
		for (int i = 0; i < static_cast<int>(src.n); i++)
			this->array[i] = src.array[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index){
	if (index >= n)
		throw std::invalid_argument("index");
	return array[index];
}

template <typename T>
inline Array<T>::~Array(){
	delete[] array;
}

template <typename T>
inline unsigned int Array<T>::size() const
{
	return 0;
}

#endif