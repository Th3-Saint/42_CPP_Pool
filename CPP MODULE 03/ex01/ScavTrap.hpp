/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:18:03 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/08 02:08:48 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string name);
		void guardGate();
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
};
#endif