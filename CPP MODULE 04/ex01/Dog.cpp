/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 02:00:08 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/09 06:06:35 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog Constructor called\n";
	dogBrain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
	delete dogBrain;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog Copy constructor called\n";
	type = other.type;
	dogBrain = new Brain();
}

Dog& Dog::operator=(const Dog& other)
{
	delete dogBrain;
	std::cout << "Dog Copy operator assignment called\n";
	type = other.type;
	dogBrain = new Brain();
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
