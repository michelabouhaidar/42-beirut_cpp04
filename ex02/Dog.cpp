/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 00:33:19 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 16:17:38 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : AAnimal("default_dog"), brain_(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string& type) : AAnimal(type), brain_(new Brain())
{
	std::cout << "Dog " << type_ << " type constructor called" << std::endl;
}

Dog::Dog(const Dog& obj) : AAnimal(obj), brain_(new Brain(*obj.brain_))
{
	std::cout << "Dog " << type_ << " copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
	if (this != &obj)
	{
		AAnimal::operator=(obj);
		*brain_ = *obj.brain_;
	}
	std::cout << "Dog " << type_ << " copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete brain_;
	std::cout << "Dog " << type_ << " destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog " << type_ << " BARKS" << std::endl;
}

void Dog::setIdea(int idx, const std::string& idea)
{
	brain_->setIdea(idx, idea);
}
const std::string& Dog::getIdea(int idx) const
{
	return brain_->getIdea(idx);
}