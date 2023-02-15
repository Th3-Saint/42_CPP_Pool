/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:20:55 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/09 01:23:51 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack( void )
{
	std::cout << name << " attacks with their " << weaponA.getType() << "\n";
}

HumanA::HumanA(std::string newName, Weapon& newWeapon): 
name(newName), weaponA(newWeapon)
{
	
}
