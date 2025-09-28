/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 12:50:08 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 12:58:11 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type_("wrong_default")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type_(type)
{
	std::cout << "WrongAnimal " << type_ << " type constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& o) : type_(o.type_)
{
	std::cout << "WrongAnimal " << type_ << " copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& o)
{
	if (this != &o)
		type_ = o.type_;
	std::cout << "WrongAnimal " << type_ << "copy assignment operator called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << type_ << " destructor called" << std::endl;
}

const std::string& WrongAnimal::getType() const
{
	return type_;
}

void WrongAnimal::setType(const std::string& t)
{
	type_ = t;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal " << type_ << " makes a wrong sound" << std::endl;
}
