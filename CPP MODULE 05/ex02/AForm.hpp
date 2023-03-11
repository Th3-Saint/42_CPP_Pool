/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:03:38 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/10 15:57:35 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define FAORM_HPP
#include <iostream>
class Bureaucrat;
class AForm
{
	private:
		const std::string _Name;
		bool _Signe;
		const int _gradeSigne;
		const int _gradeExec;
	public:
		AForm();
		AForm(const std::string _Name, const int _gradeSigne, int _gradeExec);
		~AForm();
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);		
		const std::string getName() const;
		virtual bool getSigned() const;
		virtual int getGradeSigne() const;
		virtual int getGradeExec() const;
		virtual void beSigned(Bureaucrat& Br);
		virtual void setSigne();
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);
#endif