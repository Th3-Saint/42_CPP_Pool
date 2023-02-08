/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifer <lucifer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:20:55 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/08 17:30:21 by lucifer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack( void )
{
	std::cout << name << " attacks with their " << weaponA.getType() << "\n";
}

HumanA::HumanA(std::string newName, Weapon newWeapon): name(newName), weaponA(newWeapon)
{
	
}
