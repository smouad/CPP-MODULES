/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:05:26 by msodor            #+#    #+#             */
/*   Updated: 2023/10/04 15:46:58 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria;

class Cure :public AMateria{
public:
	Cure();
	~Cure();

	Cure(const Cure& src);
	Cure & operator=(Cure const & rhs);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif