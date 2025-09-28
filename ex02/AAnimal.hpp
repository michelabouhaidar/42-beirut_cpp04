/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 00:16:45 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 01:01:40 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal
{
	protected:
		std::string type_;
	public:
		AAnimal();
		AAnimal(const std::string& type);
		AAnimal(const AAnimal& obj);
		AAnimal& operator=(const AAnimal& obj);
		virtual ~AAnimal();
		const std::string& getType() const;
		void setType(const std::string& type);
		virtual void makeSound() const = 0;
};

#endif