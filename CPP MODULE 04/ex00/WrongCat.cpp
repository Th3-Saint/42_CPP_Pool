/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 02:49:37 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/09 02:56:15 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat Constructor called\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called\n";
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "WrongCat Copy constructor called\n";
	type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat Copy operator assignment called\n";
	type = other.type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Cat sounnd" << std::endl;
}

std::string WrongCat::getType(void) const
{
	return (type);
}