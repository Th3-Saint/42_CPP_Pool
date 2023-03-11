/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 05:37:37 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/10 15:50:44 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
	 	Bureaucrat simo("simo", 5);
	 	Form A1("From_1", 40, 40);
		std::cout << A1 << std::endl;
		simo.decrement();
		std::cout << simo << std::endl;
		A1.beSigned(simo);
		simo.signForm(A1);

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}