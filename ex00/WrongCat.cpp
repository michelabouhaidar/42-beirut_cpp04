/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 12:55:42 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 12:58:01 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("wrong_cat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string& type) : WrongAnimal(type)
{
	std::cout << "WrongCat " << type_ << " type constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& o) : WrongAnimal(o)
{
	std::cout << "WrongCat " << type_ << " copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& o)
{
	if (this != &o)
		WrongAnimal::operator=(o);
	std::cout << "WrongCat " << type_ << "copy assignment operator called" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << type_ << " destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat " << type_ << " makes a wrong meow" << std::endl;
}
