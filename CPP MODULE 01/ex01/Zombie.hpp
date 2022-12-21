/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 22:50:06 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/21 08:29:21 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string name;
		static int	_nbofZombies;

	public:
		Zombie( void );
		void announce( void );
		void SetName(std::string name);
		int get_val(void) const;
		int index;
		~Zombie( void );
};

Zombie* zombieHorde( int N, std::string name );
#endif