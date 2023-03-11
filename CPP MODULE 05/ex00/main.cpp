/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 05:37:37 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/10 11:01:44 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		 Bureaucrat simo("simo", 150);
		simo.decrement();
		std::cout << simo << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}