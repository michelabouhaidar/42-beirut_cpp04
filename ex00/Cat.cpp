/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 00:33:17 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 01:05:49 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("default_cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string& type) : Animal(type)
{
	std::cout << "Cat " << type_ << " type constructor called" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	std::cout << "Cat " << type_ << " copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	if (this != &obj)
		Animal::operator=(obj);
	std::cout << "Cat " << type_ << " copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat " << type_ << " destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat " << type_ << " MEOWS" << std::endl;
}