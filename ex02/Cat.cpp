/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 00:33:17 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 16:17:10 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : AAnimal("default_cat"), brain_(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string& type) : AAnimal(type), brain_(new Brain())
{
	std::cout << "Cat " << type_ << " type constructor called" << std::endl;
}

Cat::Cat(const Cat& obj) : AAnimal(obj), brain_(new Brain(*obj.brain_))
{
	std::cout << "Cat " << type_ << " copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	if (this != &obj)
	{
		AAnimal::operator=(obj);
		*brain_ = *obj.brain_;
	}
	std::cout << "Cat " << type_ << " copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete brain_;
	std::cout << "Cat " << type_ << " destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat " << type_ << " MEOWS" << std::endl;
}

void Cat::setIdea(int idx, const std::string& idea)
{
	brain_->setIdea(idx, idea);
}
const std::string& Cat::getIdea(int idx) const
{
	return brain_->getIdea(idx);
}