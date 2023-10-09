/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:05:36 by msodor            #+#    #+#             */
/*   Updated: 2023/10/04 18:21:29 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class Ice : public AMateria{
private:
	std::string type;
public:
	Ice();
	Ice(Ice const & src);
	~Ice();

	Ice & operator=(Ice const & rhs);

	void setType(std::string type);
	std::string const & getType() const;
	AMateria* clone() const;
	void use(ICharacter& target);
};	

#endif