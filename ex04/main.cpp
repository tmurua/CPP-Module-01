/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:00:45 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/12 14:45:04 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alt_sed.hpp"

int	main(int argc, char **argv)
{
	if (check_args(argc) == 1)
		return (1);
	std::string infilename = argv[1];
	int	is_valid_file = 0; // flag to check existence of input file
	std::string og_content = read_file(infilename, is_valid_file);
	if (is_valid_file == 1)
		return is_valid_file;
	std::string new_content = replace_string(og_content, argv[2], argv[3]);
	write_file(infilename, new_content);
	return is_valid_file;
}
