/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbohle <bbohle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 05:30:25 by bbohle            #+#    #+#             */
/*   Updated: 2024/11/27 09:01:56 by bbohle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animalconstrutor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copy constructor" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Animal assignment operator called" << std::endl;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal deconstruktor called" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "SOME ANIMAL SOUNDSSS" << std::endl;
}

std::string Animal::getType() const {
    return type;
}
