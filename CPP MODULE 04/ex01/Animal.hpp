/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 01:15:36 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/09 05:59:34 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual  ~Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual void makeSound( void ) const;
		std::string getType(void) const;
};

#endif