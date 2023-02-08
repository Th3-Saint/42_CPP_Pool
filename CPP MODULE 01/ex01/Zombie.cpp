/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifer <lucifer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:41:58 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/08 16:10:43 by lucifer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int Zombie::i = 1;

Zombie::Zombie()
{
	std::cout << i << ": Created\n";
	i++;
}
void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
	std::cout << --i << ": Destoryed\n";
}

void Zombie::setName(std::string name)
{
	this->name = name;
}