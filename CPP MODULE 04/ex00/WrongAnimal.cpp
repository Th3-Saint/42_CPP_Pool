/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 02:50:59 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/09 02:55:56 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy constructor called\n";
	type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy operator assignment called\n";
	type = other.type;
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}
