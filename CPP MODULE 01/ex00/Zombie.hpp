/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifer <lucifer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 00:30:18 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/08 15:31:12 by lucifer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		void announce( void );
		Zombie();
		Zombie(std::string newname);
		~Zombie();		
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif