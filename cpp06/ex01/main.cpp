/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:48:33 by msodor            #+#    #+#             */
/*   Updated: 2023/10/12 17:53:58 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main(){
	Data *data = new Data;
	data->s1 = "Hello";
	data->n = 42;
	data->s2 = "World";
	uintptr_t raw = Serialize::serialize(data);
	std::cout << raw << std::endl;
	Data *data2 = Serialize::deserialize(raw);
	std::cout << data2->s1 << std::endl;
	std::cout << data2->n << std::endl;
	std::cout << data2->s2 << std::endl;
	delete data;
	return (0);
}