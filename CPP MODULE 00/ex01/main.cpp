/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:19:00 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/20 16:39:41 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main()
{
	PhoneBook 	PhoneBook;
	std::string	str;
	int			index;

	index = 0;
	while(1)
	{
		std::cout << "\nINSERT A VALID COMMAND:" << "\n\n";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if (str.empty())
			continue ;
		if (str == "EXIT")
		{
			std::cout << "You exit" << "\n";
			exit(0);
		}
		else
			if (str == "ADD")
			{
				PhoneBook.add_contact(index);
				if (index == 8)
					index = 0;
				index++;
			}
		else
			if (str == "SEARCH")
				PhoneBook.print_contact();
	}
	return 0;
}
