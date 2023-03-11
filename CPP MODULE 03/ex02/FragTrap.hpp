/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:19:26 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/08 02:12:43 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void highFivesGuys(void);
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
};
#endif