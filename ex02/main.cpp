/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:24:00 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/04 11:05:12 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	string = "HI THIS IS BRAIN"; // original string and value
	std::string	*stringPTR = &string; // pointer to string
	std::string &stringREF = string; // reference to string

	std::cout << &string << "\n";	// address of the string variable
	std::cout << stringPTR << "\n";	// address held by stringPTR (same as above)
	std::cout << &stringREF << "\n";// address held by stringREF (same as above)

	std::cout << string << "\n";	// value of the string variable
	std::cout << *stringPTR << "\n";// value pointed to by stringPTR
	std::cout << stringREF << "\n";	// value referred to by stringREF
}
