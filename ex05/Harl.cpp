/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:15:47 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/12 17:05:50 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void	Harl::debug(void)
{
	std::cout << "This is the DEBUG level.\n";
}

void	Harl::info(void)
{
	std::cout << "This is the INFO level.\n";
}

void	Harl::warning(void)
{
	std::cout << "This is the WARNING level.\n";
}

void	Harl::error(void)
{
	std::cout << "This is the ERROR level.\n";
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	// declare an array of pointers to member fns with 4 elements
	void (Harl::*fnPointer[4])(void);
	// assign each element of the array to a specific member function
	fnPointer[0] = &Harl::debug;
	fnPointer[1] = &Harl::info;
	fnPointer[2] = &Harl::warning;
	fnPointer[3] = &Harl::error;

	int i = 0;
	while (i < 4)
	{
		// if current level matches input, call corresponding function
		if (levels[i] == level)
		{
			(this->*fnPointer[i])();
			break;
		}
		i++;
	}
}

