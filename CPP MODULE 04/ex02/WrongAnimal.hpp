/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 02:47:12 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/09 02:57:02 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		 ~WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);
		void makeSound( void ) const;
		std::string getType(void) const;
};

#endif