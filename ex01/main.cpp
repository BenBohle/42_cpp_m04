/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbohle <bbohle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 05:30:18 by bbohle            #+#    #+#             */
/*   Updated: 2024/11/27 09:09:14 by bbohle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int numAnimals = 10;
    Animal* animals[numAnimals];

    for (int i = 0; i < numAnimals / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = numAnimals / 2; i < numAnimals; ++i) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }

    // Test deep copy
    Dog originalDog;
    Dog copiedDog = originalDog;
    Cat originalCat;
    Cat copiedCat = originalCat;

    return 0;
}