/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:32:48 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/12 17:23:08 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	if (argc != 2)
	{
		std::cerr << "Usage: ./harl_2.0 <LEVEL>\n";
		std::cerr << "Levels available: DEBUG, INFO, WARNING, ERROR\n";
		return 1;
	}
	harl.complain(argv[1]);
}
