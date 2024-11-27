/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbohle <bbohle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 05:30:18 by bbohle            #+#    #+#             */
/*   Updated: 2024/11/27 06:20:08 by bbohle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main() {

	// no error mit dings
	Dog dog;
    dog.makeSound();
    return 0;

	// error with dings
	// Animal animal;
    // animal.makeSound();
    // Dog dog;
    // dog.makeSound();
    // return 0;

}