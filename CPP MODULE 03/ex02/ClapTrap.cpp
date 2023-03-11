/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 05:21:12 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/08 02:12:08 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap Parametrized constructor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Constructor called\n";
}

ClapTrap::ClapTrap()
{
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << "ClapTrap Constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (HitPoints && EnergyPoints)
	{
		EnergyPoints--;
		std::cout << "ClapTrap: " << name <<  " attacks " << target <<  " causing " << AttackDamage << " points of damage!\n";
	}
	else
		std::cout << name << " has no energy to attack\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints)
	{
		std::cout << name << " Take " << amount << " of damage\n";
		if (HitPoints - amount < 0)
			HitPoints = 0;
		else
			HitPoints -= amount;
	}
	else
		std::cout << name << " has no hp left\n"; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints)
	{
		std::cout << name << "be Repaired " << amount  << " of hp\n";
		HitPoints += amount;	
		EnergyPoints--;	
	}
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	name = other.name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	name = other.name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
	return *this;
}