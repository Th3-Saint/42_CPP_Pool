/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifer <lucifer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 00:29:32 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/08 15:32:53 by lucifer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string newname): name (newname)
{
	std::cout << name << " Created\n";
}

Zombie::Zombie()
{
	std::cout << "Constructor called\n";
}

Zombie::~Zombie()
{
	std::cout << name << " Destoryed\n";
}

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
