/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 04:51:23 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/08 02:06:26 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		unsigned int HitPoints;
		unsigned int EnergyPoints;
		unsigned int AttackDamage;
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap(std::string name);
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
};
#endif