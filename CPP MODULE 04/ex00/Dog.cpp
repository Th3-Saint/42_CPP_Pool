/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 02:00:08 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/09 02:32:28 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog Constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog Copy constructor called\n";
	type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog Copy operator assignment called\n";
	type = other.type;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog sounnd" << std::endl;
}

std::string Dog::getType(void) const
{
	return (type);
}
