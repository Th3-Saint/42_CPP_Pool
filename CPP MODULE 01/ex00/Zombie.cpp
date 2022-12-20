/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 21:34:13 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/20 22:37:33 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*--------	Default Constractor	-------------*/
Zombie::Zombie( std::string name )
{
	this->name = name;
}
/*--------	Default Destractor	-------------*/

Zombie::~Zombie( void )
{
	std::cout << name << ": Destroyed" << std::endl;
}

/*--------	Memeber Functions	-------------*/

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << "\n";
	return ;
}