/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:03:41 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/10 14:04:47 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _Name(""), _Signe(false),  _gradeSigne(0), _gradeExec(0) {

	std::cout << "From Default constructor called\n";
}

Form::Form(const std::string _Name, const int _gradeSigne, int _gradeExec): 
_Name(_Name), _Signe(false),  _gradeSigne(_gradeSigne), _gradeExec(_gradeExec) {
	if (_gradeExec < 1 || _gradeSigne < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (_gradeExec > 150 || _gradeSigne > 150)
		throw (Bureaucrat::GradeTooLowException());
	std::cout << "Form Customize constructro called\n";
}
Form::~Form(){
	std::cout << "Form Destructor called\n";
}

Form::Form(const Form& other):
 _Name(other._Name), _Signe(other._Signe), _gradeSigne(other._gradeSigne), _gradeExec(other._gradeExec) {
	if (_gradeExec < 1 || _gradeSigne < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (_gradeExec > 150 || _gradeSigne > 150)
		throw (Bureaucrat::GradeTooLowException());
	std::cout << "Form copy constructor called\n";
 }

 Form& Form::operator=(const Form& other){
	_Signe = other._Signe;
	std::cout << "Form copy assignment oparator called\n";
	return *this;
 }

const std::string Form::getName() const{
	return (_Name);
}

bool Form::getSigned() const{
	return (_Signe);
}

int Form::getGradeSigne() const{
	return (_gradeSigne);
}

int Form::getGradeExec() const{
	return (_gradeExec);
}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
	os << obj.getName() << ", " << obj.getGradeSigne() << ", " << obj.getGradeExec() << ", " << obj.getSigned();
	return (os);
}

void Form::setSigne(){
	this->_Signe = true;
}

void Form::beSigned(Bureaucrat& Br){
	if (Br.getGrade() > getGradeSigne())
		throw Bureaucrat::GradeTooLowException();
	else
		setSigne();
 }
