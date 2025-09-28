/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 00:43:41 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/28 15:45:37 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	const int N = 4;
	Animal* zoo[N];
	for (int i = 0; i < N; i++)
	{
		if(i % 2 == 0)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}
	for (int i = 0; i < N; i++)
		zoo[i]->makeSound();
	for (int i = 0; i < N; i++)
		delete zoo[i];
	
	std::cout << std::endl << std::endl;

	Cat c1;
    c1.setIdea(0, "chase laser");
    Cat c2 = c1;
    c1.setIdea(0, "eat tuna");
    std::cout << "c1 idea[0] = " << c1.getIdea(0) << "\n";
    std::cout << "c2 idea[0] = " << c2.getIdea(0) << "\n";

	std::cout << std::endl << std::endl;

    Dog d1, d2;
    d1.setIdea(1, "guard the house");
    d2 = d1;
    d1.setIdea(1, "dig a hole");
    std::cout << "d1 idea[1] = " << d1.getIdea(1) << "\n";
    std::cout << "d2 idea[1] = " << d2.getIdea(1) << "\n"; 
	return 0;
}