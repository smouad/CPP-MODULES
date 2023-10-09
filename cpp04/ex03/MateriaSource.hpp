/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:22:27 by msodor            #+#    #+#             */
/*   Updated: 2023/10/04 17:14:37 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
private:
	AMateria*	inventory[4];
public:
	MateriaSource();
	~MateriaSource();
	
	MateriaSource(const MateriaSource& src);
	MateriaSource& operator =(const MateriaSource& src);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif