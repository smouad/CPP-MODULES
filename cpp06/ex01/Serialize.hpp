/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:48:40 by msodor            #+#    #+#             */
/*   Updated: 2023/10/12 17:53:10 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <cstdint>

struct Data{
	std::string s1;
	int n;
	std::string s2;
};

class Serialize{
private:
	Serialize();
public:
	Serialize(const Serialize& src);
	~Serialize();
	Serialize &operator=(const Serialize& rhs);
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};
#endif