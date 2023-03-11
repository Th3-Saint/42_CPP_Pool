/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:03:38 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/11 07:56:40 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
class Bureaucrat;
class Form
{
	private:
		const std::string _Name;
		bool _Signe;
		const int _gradeSigne;
		const int _gradeExec;
	public:
		Form();
		Form(const std::string _Name, const int _gradeSigne, int _gradeExec);
		~Form();
		Form(const Form& other);
		Form& operator=(const Form& other);		
		const std::string getName() const;
		bool getSigned() const;
		int getGradeSigne() const;
		int getGradeExec() const;
		void beSigned(Bureaucrat& Br);
		void setSigne();
};

std::ostream& operator<<(std::ostream& os, const Form& obj);
#endif