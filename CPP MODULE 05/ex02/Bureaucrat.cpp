/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 04:58:04 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/10 13:54:28 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat constructor called\n";
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _Name(other._Name), grade(other.grade) {
		if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat copy constructer called\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
		grade = other.grade;
		if (grade < 1)
		throw GradeTooHighException();
		if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat copy assignment operator called\n";
	return *this;
}

Bureaucrat::Bureaucrat(std::string _Name, int grade): _Name(_Name), grade(grade) {
		if (grade < 1)
		throw GradeTooHighException();
		if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Custmize Bureaucrat copy constructer called\n";
	
}
const std::string Bureaucrat::getName() const {
	return (_Name);
}

int Bureaucrat::getGrade() const{
	return (grade);
}

void Bureaucrat::increment(){
	--grade;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrement(){
	++grade;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}

void Bureaucrat::signForm(Form& F)
{
	try{
		F.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn’t sign " << F.getName() << std::endl;
	}
		std::cout << this->getName() << " Signed " << F.getName() << std::endl;
}