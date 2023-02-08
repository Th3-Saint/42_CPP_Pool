/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifer <lucifer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:15:42 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/08 17:28:37 by lucifer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newType): type(newType)
{
		
}

const std::string& Weapon::getType ( void ) const
{
	return (type);
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}