/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:47:05 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/19 04:35:18 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *Zombies;

	Zombies = zombieHorde(10, "Foo");
	for (int i = 0; i < 10; i++)
		Zombies[i].announce();
	delete[] Zombies;
	return (0);
}