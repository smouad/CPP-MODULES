/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:49:37 by msodor            #+#    #+#             */
/*   Updated: 2023/09/25 13:31:34 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
protected:
    std::string type;
public:
    /* constructors */
    WrongAnimal();
    WrongAnimal(const WrongAnimal& src);

    /* operators */
    WrongAnimal& operator=(const WrongAnimal& src);

    /* distructor */ 
    ~WrongAnimal();

    /* member function */
    void makeSound() const;
    std::string getType() const;
};

#endif