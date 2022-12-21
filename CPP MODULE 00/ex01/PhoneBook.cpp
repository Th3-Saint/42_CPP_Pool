/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:08:38 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/21 10:41:29 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "------------------------------------" << "\n";
	std::cout << "/  Welcome to PhoneBook Software   /" << "\n";
	std::cout << "------------------------------------" << "\n";
	std::cout << "\n	PHONEBOOK MANUAL " << "\n";
	std::cout << "------------------------------------" << "\n";
	std::cout << "ADD		: " << "<< Create a new contact >>" << "\n";
	std::cout << "SEARCH		: " << "<< Search for an existing contact >>" << "\n";
	std::cout << "EXIT		: " << "<< Exit the program >>" << "\n";
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor Called" << std::endl;
}

Contact::Contact(void)
{
	Contact::_firstname = "";
	Contact::_lastname = "";
	Contact::_nickname = "";
	Contact::_darksecret = "";
	Contact::_PhoneNumber = "";
}

Contact::~Contact(void)
{
	std::cout << "Destructor Called" << std::endl;
}


/*------------------	   SET VALUES MEMBER FUNCTIONS		 ----------------------*/

void	Contact::SetFirstName(std::string firstname)
{
	this->_firstname = firstname;
	return ;
}

void	Contact::SetLastName(std::string firstname)
{
	this->_lastname = firstname;
	return ;
}

void	Contact::SetNickName(std::string firstname)
{
	this->_nickname = firstname;
	return ;
}

void	Contact::SetDarkSecret(std::string firstname)
{
	this->_darksecret = firstname;
	return ;
}

void	Contact::SetPhoneNumber(std::string phone)
{
	this->_PhoneNumber = phone;
	return ;
}

/*-----------------------   GET VALUES OF MEMBER FUNCTIONS    ------------------*/

std::string Contact::GetFirstName(void)
{
	return (this->_firstname);
}

std::string Contact::GetLastName(void)
{
	return (this->_lastname);
}

std::string Contact::GetNickName(void)
{
	return (this->_nickname);
}

std::string Contact::GetDarkSecret(void)
{
	return (this->_darksecret);
}

std::string Contact::GetPhoneNumber(void)
{
	return (this->_PhoneNumber);
}

/*-------------				CREATE CONTACT			-------------------------*/

void	PhoneBook::add_contact(int	index)
{
		std::string str;
		
		while (str.empty())
		{	
			std::cout << "\nEnter the first name: " << "\n";
			std::getline(std::cin, str);
			contact[index % 8].SetFirstName(str);
			checker();
		}
		str.clear();
		while (str.empty())
		{
			std::cout << "Enter the last name: " << "\n";
			std::getline(std::cin, str);
			contact[index % 8].SetLastName(str);
			checker();
		}
		str.clear();
		while (str.empty())
		{
			std::cout << "Enter the nick name: " << "\n";
			std::getline(std::cin, str);
			contact[index % 8].SetNickName(str);
			checker();
		}
		str.clear();
		while (str.empty())
		{
			std::cout << "Enter the darksecret: " << "\n";
			std::getline(std::cin, str);
			contact[index % 8].SetDarkSecret(str);
			checker();
		}
		str.clear();
		while (str.empty())
		{
			std::cout << "Enter the PhoneNumber: " << "\n";
			std::getline(std::cin, str);
			contact[index % 8].SetPhoneNumber(str);
			checker();
		}
		
}

/*-------------				PRINT CONTACT			-------------------------*/

void PhoneBook::print_specific_contact(int i)
{
	std::cout << "\nFirst name	:		" << contact[i].GetFirstName() << "\n";
	std::cout << "Last name 	: 		" << contact[i].GetLastName() << "\n";
	std::cout << "Nick name 	: 		" << contact[i].GetNickName() << "\n";
	std::cout << "Darksecret 	:		" << contact[i].GetDarkSecret() << "\n";
	std::cout << "Phone_Number 	: 		" << contact[i].GetPhoneNumber() << "\n";
}

void	PhoneBook::print_contact(void)
{
	int i;
	int	index;

	std::string str;
	
	i = 0;
	while (!contact[i].GetFirstName().empty() && i < 8)
	{
		std::cout << std::setw(10) << "\nIndex : " << i << "|";
		if (contact[i].GetFirstName().length() >= 10)
			std::cout.write(contact[i].GetFirstName().c_str(), 9) << "." << "|";
		else
			std::cout << std::setw(10) << contact[i].GetFirstName() << "|";
		if (contact[i].GetLastName().length() >= 10)
			std::cout.write(contact[i].GetLastName().c_str(), 9) << "." << "|";
		else
			std::cout << std::setw(10) << contact[i].GetLastName() << "|";
		if (contact[i].GetNickName().length() >= 10)
			std::cout.write(contact[i].GetNickName().c_str(), 9) << "." << "|";
		else
			std::cout << std::setw(10) << contact[i].GetNickName() << "|" << "\n\n";
		i++;
	}
	bool	is_true = true;
	std::cout << "Please insert the index number: " << std::endl;
	while (is_true)
	{
		std::cin >> index;
		if (std::cin.eof())
			exit(0);
		if (std::cin.fail())
			std::cout << "Please insert intgers only" << "\n";
		else
			{
				if (index < i)
					print_specific_contact(index);
				else
					std::cout << "Contact not found" << "\n";
					is_true = false;
			}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return ;	
}

/*-------------				UTILS FUNCTIONS			-------------------------*/

void	checker(void)
{
	if (std::cin.eof())
	{
		std::cout << "STDING CLOSED\n";	
		exit(0);
	}
}