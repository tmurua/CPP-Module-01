/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:00:45 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/06 09:47:28 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> // for std::ifstream class (file input operations)
#include <sstream> // for std::stringstream (to capture file content as string)

int check_args(int argc, char **argv);
std::string read_file_content(std::string &filename);

int main(int argc, char **argv)
{
	std::string filename = argv[1];

	if (check_args(argc, argv) == 1)
		return 1;
	std::string file_content = read_file_content(filename);

	std::cout << "The file " << filename << " contains: " << file_content;
}

int check_args(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
		return 1;
	}
	return 0;
}

std::string read_file_content(std::string &filename)
{
	std::ifstream file(filename.c_str()); // open input file in argv[1]
	if (!file)
		std::cerr << "Error opening file " << filename <<"\n";
	std::stringstream buffer; // stringstream will store entire file content as string
	buffer << file.rdbuf(); // rdbuf(): read file's internal buffer. <<: pass it to stringstream
	std::string file_content = buffer.str(); // stringstream's content into string
	return (file_content);
}
