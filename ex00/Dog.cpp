/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbohle <bbohle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:01:37 by bbohle            #+#    #+#             */
/*   Updated: 2024/11/27 09:01:39 by bbohle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

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