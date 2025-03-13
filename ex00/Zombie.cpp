/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:24:38 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/13 10:59:49 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) // constructor initializes Zombie with a name
{
	this->name = name;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie() // define destructor to simply log object destruction
{
	std::cout << name << " was destroyed.\n";
}
