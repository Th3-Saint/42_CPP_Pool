/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:43:55 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/08 02:11:30 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Constracotr called\n";
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Constructor called\n";
}
ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	HitPoints = 10;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap Paramitrized Constructor called\n";
}

void ScavTrap::guardGate()
{
	std::cout << " ScavTrap is now in Gate keeper mode.\n";
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	name = other.name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	name = other.name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
	return *this;
}
