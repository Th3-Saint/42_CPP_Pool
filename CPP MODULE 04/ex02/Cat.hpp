/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 02:08:59 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/09 05:44:44 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *catBrain;
	public:
		Cat();
		~Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		void makeSound( void ) const;
		std::string getType(void) const;
};

#endif