/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 22:54:21 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/20 23:13:27 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*--------		Functions COnstactor		--------------*/

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *Zombies;
	int	i;

	i = 0;
	Zombies = new Zombie[N];
	while (i < N)
		Zombies[i++].SetName(name);

	return (Zombies);
}