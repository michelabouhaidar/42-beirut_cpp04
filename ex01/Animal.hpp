/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 00:16:45 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 01:01:40 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
	protected:
		std::string type_;
	public:
		Animal();
		Animal(const std::string& type);
		Animal(const Animal& obj);
		Animal& operator=(const Animal& obj);
		virtual ~Animal();
		const std::string& getType() const;
		void setType(const std::string& type);
		virtual void makeSound() const;
};

#endif