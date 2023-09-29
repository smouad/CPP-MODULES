/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:49:42 by msodor            #+#    #+#             */
/*   Updated: 2023/09/25 13:43:40 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
public:
    /* constructors */
    WrongCat();
    WrongCat(const WrongCat& src);

    /* operators */
    WrongCat& operator=(const WrongCat& src);

    /* distructor */ 
    ~WrongCat();

    /* member function */
    void makeSound() const;
    std::string getType() const;
};

#endif