/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 02:29:52 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/10 11:55:43 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
	private:
		const std::string _Name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string _Name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		const std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();
		class GradeTooHighException: public std::exception
		{
			public:
				const char * what () const throw() {
					return "Grade to high exception";
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				const char *  what() const throw() {
					return "Grade to low exception";
			}
				
		};
		
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
#endif