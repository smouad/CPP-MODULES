/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:49:26 by msodor            #+#    #+#             */
/*   Updated: 2023/09/27 16:05:34 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
private:
    Brain *brain;
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