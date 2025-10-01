/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 13:04:02 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 16:17:26 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas_[i] = "";
}

Brain::Brain(const Brain& obj)
{
	for (int i = 0; i< 100; i++)
		ideas_[i] = obj.ideas_[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
	if (this != &obj)
		for (int i = 0; i< 100; i++)
			ideas_[i] = obj.ideas_[i];
	std::cout << "Brain copy assignment operator called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int idx, const std::string& idea)
{
	if (idx < 0 || idx >= 100)
	{
		std::cout << "Index out of range, Brain::setIdea" << std::endl;
		return ;
	}
	ideas_[idx] = idea;
}

const std::string& Brain::getIdea(int idx) const
{
	static const std::string empty;
	if (idx < 0 || idx >= 100)
	{
		std::cout << "Index out of range, Brain::getIdea" << std::endl;
		return empty;
	}
	return ideas_[idx];
}
