/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alt_sed.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:38:29 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/10 13:48:17 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALT_SED_HPP
#define ALT_SED_HPP

#include <iostream>
#include <fstream> // for std::ifstream/ofstream classess (file i/o operations)
#include <sstream> // for std::stringstream (capture file og_content as string)

int			check_args(int argc, char **argv);
std::string	read_infile(std::string &infilename, int &is_file_valid);
void		write_outfile(std::string &infilename, std::string &new_content);
std::string	replace_string(std::string og_content, std::string s1, std::string s2);

#endif
