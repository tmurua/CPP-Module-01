/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:14:29 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/11 09:04:47 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	check_args(int argc)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./sed_is_for_losers <file> <s1> <s2>" << "\n";
		return 1;
	}
	return 0;
}

std::string	read_file(std::string &infilename, int &is_valid_file)
{
	std::ifstream infile(infilename.c_str());
	if (!infile)
	{
		std::cerr << "There's no file '" << infilename << "' in current directory\n";
		is_valid_file = 1;
	}
	std::stringstream buffer;
	buffer >> infile.rdbuf();
	std::string og_content = buffer.str();
	return og_content;
}

std::string	replace_string(std::string og_content, std::string s1, std::string s2)
{
	std::string	new_content;
	size_t		og_pos = 0;
	size_t		s1_found_index;
	while (true)
	{
		s1_found_index = og_content.find(s1, og_pos);
		if (s1_found_index == std::string::npos)
			break;
		std::string content_part = og_content.substr(og_pos, s1_found_index - og_pos);
		new_content += content_part;
		new_content += s2;
		og_pos = s1_found_index + s1.length();
	}
	new_content += og_content.substr(og_pos);
	return new_content;
}
