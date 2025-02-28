/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:44:31 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/28 17:10:11 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie() // default constructor (empty) used for array allocation with new
	{
	}
	void	give_name(std::string name) // set name outside constructor
	{
		this->name = name;
	}
	void	announce()
	{
		std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
	}
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif
