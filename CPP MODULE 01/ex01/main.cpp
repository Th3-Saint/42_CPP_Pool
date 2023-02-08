/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifer <lucifer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:47:05 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/08 15:53:57 by lucifer          ###   ########.fr       */
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