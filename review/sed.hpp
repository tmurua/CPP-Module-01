/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:09:01 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/10 20:10:53 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <sstream>

// 1. READ INPUT FILE AND CONVERT IFSTREAM INTO STRING
// 2. Replace s1 in og_content by s2
// 3. Write new_content into outfile

int			check_args(int argc);
std::string	read_file(std::string &infilename, int &is_valid_file);
std::string replace_string(std::string og_content, std::string s1, std::string s2);


#endif
