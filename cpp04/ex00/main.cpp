/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:49:30 by msodor            #+#    #+#             */
/*   Updated: 2023/09/25 13:56:04 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"

int main(){
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    std::cout << "------------------------------------" << std::endl;
    const WrongAnimal* wronA = new WrongAnimal();
    const WrongAnimal* wrongC = new WrongCat();

    std::cout << wronA->getType() << " " << std::endl;
    std::cout << wrongC->getType() << " " << std::endl;
    wronA->makeSound(); //will output the cat sound!
    wrongC->makeSound();
    delete wronA;
    delete wrongC;
    return 0;
}
