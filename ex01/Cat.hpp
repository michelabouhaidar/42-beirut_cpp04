/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 00:33:14 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 16:16:27 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"
#include  "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain_;
	public:
		Cat();
		Cat(const std::string& type);
		Cat(const Cat& obj);
		Cat& operator=(const Cat& obj);
		~Cat();
		void makeSound() const;
		void setIdea(int idx, const std::string& idea);
		const std::string& getIdea(int idx) const;
};
#endif