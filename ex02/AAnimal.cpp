/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 00:21:47 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 01:01:50 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : type_("default")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string& type) : type_(type)
{
	std::cout << "AAnimal " << type_ << " type constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& obj) : type_(obj.type_)
{
	std::cout << "AAnimal " << type_ << " copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& obj)
{
	if (this != &obj)
        this->type_ = obj.type_;
	std::cout << "AAnimal " << type_ << " copy assignment operator called" << std::endl;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal " << type_ << " destructor called" << std::endl;
}

const std::string& AAnimal::getType() const
{
	return type_;
}

void AAnimal::setType(const std::string& type)
{
	type_ = type;
}