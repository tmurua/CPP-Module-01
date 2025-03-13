/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:24:38 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/13 11:05:54 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() // default constructor (empty) used for array allocation with new
{
}

void	Zombie::give_name(std::string name) // set name outside constructor
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
