/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:03:41 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/10 14:04:47 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): _Name(""), _Signe(false),  _gradeSigne(0), _gradeExec(0) {

	std::cout << "From Default constructor called\n";
}

AForm::AForm(const std::string _Name, const int _gradeSigne, int _gradeExec): 
_Name(_Name), _Signe(false),  _gradeSigne(_gradeSigne), _gradeExec(_gradeExec) {
	if (_gradeExec < 1 || _gradeSigne < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (_gradeExec > 150 || _gradeSigne > 150)
		throw (Bureaucrat::GradeTooLowException());
	std::cout << "AForm Customize constructro called\n";
}
AForm::~AForm(){
	std::cout << "AForm Destructor called\n";
}

AForm::AForm(const AForm& other):
 _Name(other._Name), _Signe(other._Signe), _gradeSigne(other._gradeSigne), _gradeExec(other._gradeExec) {
	if (_gradeExec < 1 || _gradeSigne < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (_gradeExec > 150 || _gradeSigne > 150)
		throw (Bureaucrat::GradeTooLowException());
	std::cout << "AForm copy constructor called\n";
 }

 AForm& AForm::operator=(const AForm& other){
	_Signe = other._Signe;
	std::cout << "AForm copy assignment oparator called\n";
	return *this;
 }

const std::string AForm::getName() const{
	return (_Name);
}

bool AForm::getSigned() const{
	return (_Signe);
}

int AForm::getGradeSigne() const{
	return (_gradeSigne);
}

int AForm::getGradeExec() const{
	return (_gradeExec);
}

std::ostream& operator<<(std::ostream& os, const AForm& obj) {
	os << obj.getName() << ", " << obj.getGradeSigne() << ", " << obj.getGradeExec() << ", " << obj.getSigned();
	return (os);
}

void AForm::setSigne(){
	this->_Signe = true;
}

void AForm::beSigned(Bureaucrat& Br){
	if (Br.getGrade() > getGradeSigne())
		throw Bureaucrat::GradeTooLowException();
	else
		setSigne();
 }
