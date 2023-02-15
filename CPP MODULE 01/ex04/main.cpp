/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:35:43 by mrobaii           #+#    #+#             */
/*   Updated: 2023/02/15 03:51:24 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"

void ft_replace_file(std::ifstream &infile, std::ofstream &outfile, char **av)
{
	std::string content;
	std::string line;
	
	while(std::getline(infile, line))
	{
		std::size_t pos = line.find(av[2]);
		if (pos != std::string::npos)
		{
			line.erase(pos, std::strlen(av[2]));
			line.insert(pos, av[3]);
		}
		content += line + "\n";
	}
	content.erase(content.length() - 1, 1);
	outfile << content;
}

int main(int ac, char **av)
{
	std::ifstream infile;
	std::ofstream outfile;


	if (ac == 4)
	{
		infile.open(av[1], std::ios::in);
		if (!infile.is_open())
		{
			std::cerr << "Failed to open the input file\n";
			return (1);	
		}
		outfile.open((std::string)av[1] + ".replace", std::ios::out);
		if (!outfile.is_open())
		{
			infile.close();
			std::cerr << "Failed to open the replace file\n";
			return (1);	
		}
		ft_replace_file(infile,  outfile, av);
		infile.close();
		outfile.close();
	}
	else
		std::cout << "The progam need 4 arguments\n";
		std::sting jrl ; df 
		ld]fl [

			dg' k
			kdg'
			l
		]
	return (0);
}