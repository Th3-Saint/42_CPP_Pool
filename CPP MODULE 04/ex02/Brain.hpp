/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 05:36:22 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/09 05:42:59 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
#define Brain_HPP
#include <iostream>
#include "Animal.hpp"

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
};

#endif