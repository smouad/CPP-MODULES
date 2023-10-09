/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:49:21 by msodor            #+#    #+#             */
/*   Updated: 2023/10/04 16:36:36 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal{
public:
    /* constructors */
    Cat();
    Cat(const Cat& src);

    /* operators */
    Cat& operator=(const Cat& src);

    /* destructor */
    ~Cat();

    /* member function */
    void makeSound() const;
    std::string getType() const;
};

#endif