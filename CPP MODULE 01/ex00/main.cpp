/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifer <lucifer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 00:49:58 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/08 15:36:06 by lucifer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *Zombie;

	Zombie = newZombie("Foo");
	Zombie->announce();
	randomChump("Boo");
	randomChump("Bee");
	randomChump("Lol");


	delete Zombie;
	return (0);
}