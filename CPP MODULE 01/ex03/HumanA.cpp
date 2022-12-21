/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:10:57 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/21 15:19:50 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon Weapon)
{
	this->name = name;
	Wp = Weapon;
}

void HumanA::attack( void )
{
	std::cout << this->name << " attacks with their " << Wp.getType() << "\n";
	return ;
}
