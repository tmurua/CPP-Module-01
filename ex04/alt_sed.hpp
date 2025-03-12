/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alt_sed.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:38:29 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/12 14:43:14 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALT_SED_HPP
#define ALT_SED_HPP

#include <iostream>
#include <fstream> // for std::ifstream/ofstream classess (file i/o operations)
#include <sstream> // for std::stringstream (capture file og_content as string)

// 1. Read input file and convert ifstream into stream
// 2. Replace s1 in og_content by s2
// 3. Write new_content into outfile

int			check_args(int argc);
std::string	read_file(std::string &infilename, int &is_valid_file);
std::string replace_string(std::string og_content, std::string s1, std::string s2);
void		write_file(std::string infilename, std::string new_content);

#endif
