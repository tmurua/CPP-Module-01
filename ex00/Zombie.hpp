/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 22:18:59 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/27 17:36:07 by tmurua           ###   ########.fr       */
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
	Zombie(std::string name) // constructor initializes Zombie with a name
	{
		this->name = name;
	}
	void	announce()
	{
		std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
	}
	~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
