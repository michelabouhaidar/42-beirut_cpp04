/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 00:33:14 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 01:01:30 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const std::string& type);
		Cat(const Cat& obj);
		Cat& operator=(const Cat& obj);
		~Cat();
		void makeSound() const;
};
#endif