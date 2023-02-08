/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifer <lucifer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:19:03 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/08 16:44:36 by lucifer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string name = "HI THIS IS BRAIN";
	std::string *stringPTR = &name;
	std::string& stringREF = name;
	
	// Adresses of string
	
	std::cout << "The memory address of the string variable: ";
	std::cout << &name << std::endl;
	std::cout << "The memory address held by stringPTR: ";
	std::cout << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: ";
	std::cout << &stringREF << std::endl;
	std::cout << "-------------------------------------------------\n";
	// Values of string
	
	std::cout << "The value of the string variable: " << name << "\n";
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << "\n";
	std::cout << "The value pointed to by stringREF: " << stringREF << "\n";
	
	return (0);
	}