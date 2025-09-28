/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 00:33:21 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 16:16:29 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain_;
	public:
		Dog();
		Dog(const std::string& type);
		Dog(const Dog& obj);
		Dog& operator=(const Dog& obj);
		~Dog();
		void makeSound() const;
		void setIdea(int idx, const std::string& idea);
		const std::string& getIdea(int idx) const;
};
#endif