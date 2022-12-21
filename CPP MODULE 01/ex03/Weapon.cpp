/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:09:07 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/21 13:59:00 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*---------- Default Constractror -------------*/

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string& Weapon::getType( void )
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}

Weapon::~Weapon ( void )
{
	std::cout << "Destractor called" << "\n";
}
