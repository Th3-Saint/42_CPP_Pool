/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:20:55 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/19 03:05:52 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack( void )
{
	std::cout << name << " attacks with their " << weaponA.getType() << "\n";
}

HumanA::HumanA(std::string newname, Weapon& newWeapon): 
name(newname), weaponA(newWeapon)
{
	
}
