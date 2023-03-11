/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:08:54 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/08 02:13:42 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called\n";
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap paramitrized constructor called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called\n";
}
void FragTrap::highFivesGuys( void )
{
	std::cout << "Give me a high five!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
	name = other.name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	name = other.name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
	return *this;
}