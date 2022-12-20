/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:37:21 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/11 18:46:02 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	ft_print(std::string str)
{
	for (int i = 0; str[i]; i++)
		std::cout << (char) toupper(str[i]);	
}

int main(int ac, char **av)
{
	std::string str;

	if (ac > 1)
	{
		for(int i = 1; i < ac; i++)
		{
			str = av[i];
			ft_print(str);
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}