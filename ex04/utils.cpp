/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:41:14 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/12 14:43:57 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alt_sed.hpp"

int	check_args(int argc)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./sed_is_for_losers <filename> <s1> <s2>" << "\n";
		return 1;
	}
	return 0;
}

std::string	read_file(std::string &infilename, int &is_valid_file)
{
	std::ifstream infile(infilename.c_str()); // c_str(): std::string to C-string
	if (!infile)
	{
		std::cerr << "There's no file '" << infilename << "' in current directory\n";
		is_valid_file = 1;
	}
	std::stringstream buffer; // stringstream will hold file's og_content
	buffer << infile.rdbuf(); // rdbuf(): read file's internal buffer
	std::string og_content = buffer.str();
	return og_content;
}

std::string	replace_string(std::string og_content, std::string s1, std::string s2)
{
	std::string	new_content;
	size_t		og_pos = 0; // track current char position in string og_content
	size_t		s1_found_index;
	while (true)
	{
		s1_found_index = og_content.find(s1, og_pos);
		if (s1_found_index == std::string::npos) // find() returns npos if no s1 is found
			break; // starting from og_pos, i.e no more occurrences of s1 in og_content
		std::string content_part = og_content.substr(og_pos, s1_found_index - og_pos);
		new_content += content_part; // append 'content_part to 'new_content'
		new_content += s2; // append replacement string s2 in place of found s1
		og_pos = s1_found_index + s1.length(); // move og_pos past the found substring
	}
	new_content += og_content.substr(og_pos);
	return new_content;
}

void	write_file(std::string infilename, std::string new_content)
{
	std::string outfilename = infilename + ".replace";
	std::ofstream outfile(outfilename.c_str());
	if (!outfile)
		std::cerr << "Error while creating " << outfilename << "\n";
	outfile << new_content;
}
