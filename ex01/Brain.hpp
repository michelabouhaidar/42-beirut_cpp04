/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 13:04:05 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 15:51:38 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	private:
		std::string ideas_[100];
	public:
		Brain();
		Brain(const Brain& obj);
		Brain& operator=(const Brain& obj);
		~Brain();
		void setIdea(int idx, const std::string& idea);
		const std::string getIdea(int idx) const;
};

#endif