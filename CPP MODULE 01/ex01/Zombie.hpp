/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifer <lucifer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:39:30 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/08 16:18:10 by lucifer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string name;
		static int i;
	public:
		void announce( void );
		Zombie();
		~Zombie();
		void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );
#endif