/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 22:58:44 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/20 23:38:09 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*--------		Default Constractor		--------------*/

Zombie::Zombie( void )
{
}

/*--------		Default Destractor		--------------*/

Zombie::~Zombie( void )
{
	std::cout << this->name <<  " Destroyed" << "\n";
}

/*----------		memeber functions		--------------*/


void Zombie::SetName(std::string name)
{
	this->name = name;
	return ;
}

void Zombie::announce( void )
{
	std::cout << this->name << ": Moar  BraiiiiiiinnnzzzZ..." << "\n";
	return ;
}

