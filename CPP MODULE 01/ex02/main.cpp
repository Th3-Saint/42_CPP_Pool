/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 08:48:21 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/21 08:56:13 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string& stringREF = str;
	std::string *stringPTR;

	stringPTR = &str;
	std::cout << "The memory address of the string variable: " << &str << "\n";
	std::cout << "The memory address held by stringPTR: " << stringPTR << "\n";
	std::cout << "The memory address held by stringREF: " << &stringREF << "\n\n";
	
	std::cout << "--------------------------------------------------------------\n\n";
	
	std::cout << "The value of the string variable: " << str << "\n";
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << "\n";
	std::cout << "The value pointed to by stringPTR: " << stringREF << "\n";

	return (0);
	
}