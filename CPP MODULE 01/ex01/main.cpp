/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:04:38 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/21 11:48:32 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie *Zombies;
	
	Zombies = zombieHorde(10, "Zombie");
	for(int i = 0; i < 10; i++)
		Zombies[i].announce();
	delete[] Zombies;
}