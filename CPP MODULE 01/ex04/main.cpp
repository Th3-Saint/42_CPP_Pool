/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:35:43 by mrobaii           #+#    #+#             */
/*   Updated: 2023/02/15 05:05:41 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"


int main(int ac, char **av)
{
	if (ac == 4)
	{
		FileReplace fileReplacer(av[1], (std::string)av[1] + ".replace", av[2], av[3]);
		if(fileReplacer.replace())
			std::cout << "Seccuss\n";
		else
			return 0;
	}
	else
		std::cout << "4 Arguments only\n";
}