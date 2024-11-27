/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbohle <bbohle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:01:44 by bbohle            #+#    #+#             */
/*   Updated: 2024/11/27 09:01:48 by bbohle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

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