/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 02:00:13 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/09 02:32:17 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		void makeSound( void ) const;
		std::string getType(void) const;
};

#endif