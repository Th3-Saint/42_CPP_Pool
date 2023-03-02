/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 03:23:43 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/02 03:09:42 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"

FileReplace::FileReplace(std::string infile, std::string outfile, std::string search,
		std::string replace): m_infile(infile), m_outfile(outfile), m_search(search), m_replace(replace)
{}

FileReplace::FileReplace()
{
	std::cout << "Constructro called\n";
}

FileReplace::~FileReplace()
{
	
}

bool FileReplace::replace(void)
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
	std::string line;
	std::string content;
	while (std::getline(infile, line))
	{
		std::size_t pos = line.find(m_search);
		while (pos != std::string::npos)
		{
			line.erase(pos, m_search.length());
			line.insert(pos, m_replace);
			pos = line.find(m_search, pos + m_replace.length());
		}
		content += line + "\n";
	}
	content.erase(content.length() - 1, 1);
	outfile << content;
	infile.close();
	outfile.close();
	return (true);
}