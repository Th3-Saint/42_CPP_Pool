/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:42:44 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/20 23:25:48 by mrobaii          ###   ########.fr       */
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
		Zombie( std::string name );
		void announce( void );
		~Zombie( void );
};

Zombie *newZombie( std::string name );
void randomChump( std::string name );
#endif