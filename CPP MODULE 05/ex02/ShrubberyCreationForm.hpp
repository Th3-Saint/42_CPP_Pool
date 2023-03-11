/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 04:15:18 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/11 04:25:19 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm
{
	private:
		AForm form;
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(AForm& A);
		ShrubberyCreationForm(const AForm& other);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm& other);
		

};
#endif