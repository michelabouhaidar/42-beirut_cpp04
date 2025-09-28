/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 00:33:21 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 01:04:00 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const std::string& type);
		Dog(const Dog& obj);
		Dog& operator=(const Dog& obj);
		~Dog();
		void makeSound() const;
};
#endif