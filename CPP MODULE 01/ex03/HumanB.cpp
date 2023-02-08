/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifer <lucifer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:05:22 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/08 18:08:47 by lucifer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack( void )
{
	std::cout << name << " attacks with their " << WeaponB.getType() << "\n";
}

HumanB::HumanB(std::string newName, Weapon newWeapon): name(newName), WeaponB(newWeapon)
{
	
}