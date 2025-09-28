/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 00:33:19 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 15:42:54 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("default_dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string& type) : Animal(type)
{
	std::cout << "Dog " << type_ << " type constructor called" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	std::cout << "Dog " << type_ << " copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
	if (this != &obj)
		Animal::operator=(obj);
	std::cout << "Dog " << type_ << " copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog " << type_ << " destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog " << type_ << " BARKS" << std::endl;
}