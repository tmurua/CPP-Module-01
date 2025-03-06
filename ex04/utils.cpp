/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:41:14 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/06 17:34:44 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alt_sed.hpp"

int			check_args(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
		return 1;
	}
	return 0;
}

// read entire og_content from infile and convert it into a string
std::string	read_infile_og_content(std::string &infilename, int &is_file_valid)
{
	std::ifstream infile(infilename.c_str()); // c_str(): std::string to C-string
	if (!infile)
	{
		std::cerr << "Error opening file " << infilename <<"\n";
		is_file_valid = 1;
	}
	std::stringstream buffer; // create stringstream to capture file's og_content
	buffer << infile.rdbuf(); // rdbuf(): read file's internal buffer
	std::string og_content = buffer.str();
	return (og_content);
}

void		write_outfile(std::string &infilename, std::string &new_content)
{
	std::string outfilename = infilename + ".replace";
	std::ofstream outfile(outfilename.c_str()); // open outfile stream for writing
	if (!outfile)
		std::cerr << "Error: Cannot create file " << outfilename << "\n";
	outfile << new_content;
}

std::string	replace_string(std::string og_content, std::string s1, std::string s2)
{
	std::string new_content;
	size_t pos = 0; // track current position in string 'og_content'
	size_t found; // store position where s1 is found in 'og_content'

	// loop while s1 is found in content (find() returns npos if not found)
	while ((found = og_content.find(s1, pos)) != std::string::npos)
	{
		// extract part of 'og_content' from 'pos' up to found index
		std::string content_part = og_content.substr(pos, found - pos);
		new_content += content_part; // append 'content_part to 'new_content'
		new_content += s2; // append replacement string s2 in place of found s1
		pos = found + s1.length(); // move 'pos' past the found substring
	}
	new_content += og_content.substr(pos); // append remaining text from og_content
	return (new_content);
}
