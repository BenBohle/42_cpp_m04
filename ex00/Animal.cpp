/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbohle <bbohle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 05:30:25 by bbohle            #+#    #+#             */
/*   Updated: 2024/11/27 05:51:17 by bbohle           ###   ########.fr       */
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

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog constructor calld" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "Dog copy construcctor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    std::cout << "Dog assignment oparator called" << std::endl;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog deconstructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "WOOF, WUUUF" << std::endl;
}

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    std::cout << "Cat assignment operator called" << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat deconstructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "MEOW MEEEOOOOOOOOOOOOOOOOOOOO000000WWWWW" << std::endl;
}