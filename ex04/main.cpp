/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:00:45 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/10 13:48:17 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alt_sed.hpp"

int main(int argc, char **argv)
{
	if (check_args(argc, argv) == 1)
		return 1;
	std::string infilename = argv[1];
	int	is_file_valid = 0; // flag to deal with non-existent input file
	std::string og_content = read_infile(infilename, is_file_valid);
	if (is_file_valid == 1)
		return is_file_valid;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string new_content = replace_string(og_content, s1, s2);
	write_outfile(infilename, new_content);
}
