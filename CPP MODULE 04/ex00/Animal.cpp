/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 01:15:41 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/09 02:27:42 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor called\n";
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called\n";
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal Copy constructor called\n";
	type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal Copy operator assignment called\n";
	type = other.type;
	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal sounnd" << std::endl;
}

std::string Animal::getType(void) const
{
	return (type);
}
