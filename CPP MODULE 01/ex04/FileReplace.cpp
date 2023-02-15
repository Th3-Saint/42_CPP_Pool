/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 03:23:43 by mrobaii           #+#    #+#             */
/*   Updated: 2023/02/15 03:50:59 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"

FileReplace::FileReplace(std::string &infile, std::string &outfile, const std::string &search,
		const std::string &replace): m_infile(infile), m_outfile(outfile), m_search(search), m_replace(replace)
{}

FileReplace::FileReplace()
{
	std::cout << "Constructro called\n";
}

FileReplace::~FileReplace()
{
	
}

bool FileReplace::replace
{
	std::ifstream infile(m_infile);
	if (!infile.is_open())
	{
		std::cerr << "Failed to open the infile\n";
		return (false);
	}
	std::ofstream outfile(m_outfile);
	if (!outfile.is_open())
	{
		infile.close();
		std::cerr << "Failed to open the outfile\n";
		return (false);
	}
	std::string difmi
}