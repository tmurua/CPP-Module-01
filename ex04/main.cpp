/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:00:45 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/06 11:32:51 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> // for std::ifstream class (file input operations)
#include <sstream> // for std::stringstream (to capture file content as string)

int			check_args(int argc, char **argv);
std::string	read_infile_content(std::string &infilename);
void		write_outfile(std::string &infilename, std::string &content);

int main(int argc, char **argv)
{
	if (check_args(argc, argv) == 1)
		return 1;
	std::string infilename = argv[1];
	std::string content = read_infile_content(infilename);

	std::cout << "The file " << infilename << " contains: " << content;

	write_outfile(infilename, content);
}

int			check_args(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
		return 1;
	}
	return 0;
}

// read entire content of the file into a string
std::string	read_infile_content(std::string &infilename)
{
	std::ifstream infile(infilename.c_str()); // open input file. c_str(): std::string to C-string
	if (!infile)
		std::cerr << "Error opening file " << infilename <<"\n";
	std::stringstream buffer; // create stringstream to capture file's content
	buffer << infile.rdbuf(); // rdbuf(): read file's internal buffer. <<: pass it to stringstream
	std::string infile_content = buffer.str(); // stringstream's content into std::string
	return (infile_content);
}

void		write_outfile(std::string &infilename, std::string &content)
{
	std::string outfilename = infilename + ".replace";
	std::ofstream outfile(outfilename.c_str());
	if (!outfile)
		std::cerr << "Error: Cannot create file " << outfilename << "\n";
	outfile << content;
}
