/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 02:08:49 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/09 06:04:27 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat Constructor called\n";
	catBrain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
	delete catBrain;
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat Copy constructor called\n";
	type = other.type;
	catBrain = new Brain();
}

Cat& Cat::operator=(const Cat& other)
{
	delete catBrain;
	std::cout << "Cat Copy operator assignment called\n";
	type = other.type;
	catBrain = new Brain();
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat sounnd" << std::endl;
}

std::string Cat::getType(void) const
{
	return (type);
}
