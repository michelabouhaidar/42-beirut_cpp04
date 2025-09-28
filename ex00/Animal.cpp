/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 00:21:47 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 01:01:50 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type_("default")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string& type) : type_(type)
{
	std::cout << "Animal " << type_ << " type constructor called" << std::endl;
}

Animal::Animal(const Animal& obj) : type_(obj.type_)
{
	std::cout << "Animal " << type_ << " copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
	if (this != &obj)
        this->type_ = obj.type_;
	std::cout << "Animal " << type_ << " copy assignment operator called" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal " << type_ << " destructor called" << std::endl;
}

const std::string& Animal::getType() const
{
	return type_;
}

void Animal::setType(const std::string& type)
{
	type_ = type;
}

void Animal::makeSound() const
{
	std::cout << "Animal " << type_ << " makes sound" << std::endl;
}