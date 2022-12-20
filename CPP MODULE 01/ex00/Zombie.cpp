/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 21:34:13 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/20 22:07:09 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->name = name;
	return ;
}

Zombie::~Zombie( void )
{
	std::cout <<"destractor\n";
	std::cout << name << ": Destroyed" << std::endl;
	return ;
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << "\n";
	return ;
}


Zombie* newZombie( std::string name )
{
	Zombie *newZombie;
	
	newZombie = new Zombie(name);
	return (newZombie);
}


void randomChump( std::string name )
{
	Zombie newZombie(name);
	newZombie.announce();

	return ;
}