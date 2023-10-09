/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:49:26 by msodor            #+#    #+#             */
/*   Updated: 2023/10/04 16:36:41 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{
public:
    /* constructors */
    Dog();
    Dog(const Dog& src);

    /* operators */
    Dog& operator=(const Dog& src);

    /* destructor */
    ~Dog();

    /* member function */
    void makeSound() const;
    std::string getType() const;
};

#endif