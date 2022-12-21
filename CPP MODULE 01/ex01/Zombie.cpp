/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 22:58:44 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/21 11:49:49 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*--------		Default Constractor		--------------*/

Zombie::Zombie( void )
{
	_nbofZombies++;
	this->index = _nbofZombies - 1;
}
/*--------		Default Destractor		--------------*/

Zombie::~Zombie( void )
{
	std::cout << this->name << " " << index <<  " Destroyed" << "\n";
}

/*----------		memeber functions		--------------*/


void Zombie::SetName(std::string name)
{
	this->name = name;
	return ;
}

int Zombie::get_val(void) const{
	return (index);
}

void Zombie::announce( void )
{
	std::cout << this->name << " " << index << ": Moar  BraiiiiiiinnnzzzZ..." << "\n";
	return ;
}

int Zombie::_nbofZombies = 0;