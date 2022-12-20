/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:53:59 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/19 19:40:35 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

void	checker(void);

class	Contact
{
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _darksecret;
		std::string	_PhoneNumber;
		
	public:
		Contact(void);
		~Contact(void);
		/* SET VALUES MEMBER FUNCTIONS */
		
		void	SetFirstName(std::string firstname);
		void	SetLastName(std::string lastname);
		void	SetNickName(std::string nickname);
		void	SetDarkSecret(std::string darksecret);
		void	SetPhoneNumber(std::string phonenumber);
		/* GET VALUES */

		std::string	GetFirstName(void);
		std::string	GetLastName(void);
		std::string	GetNickName(void);
		std::string	GetDarkSecret(void);
		std::string	GetPhoneNumber(void);
	
};

class	PhoneBook
{
	private:
		Contact contact[8];
	public:
		
			PhoneBook(void);
			~PhoneBook(void);
	void	add_contact(int index);
	void	print_contact(void);
	void 	print_specific_contact(int i);
};

#endif