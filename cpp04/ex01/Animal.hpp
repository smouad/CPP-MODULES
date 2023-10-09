/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:49:15 by msodor            #+#    #+#             */
/*   Updated: 2023/10/04 13:45:30 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
protected:
    std::string type;
public:
    /* constructors */
    Animal();
    Animal(const Animal& src);

    /* operators */
    Animal& operator=(const Animal& src);

    /* destructor */
    virtual ~Animal();

    /* member function */
    virtual void makeSound() const;
    virtual std::string getType() const;
};

#endif