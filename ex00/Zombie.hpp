/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 22:18:59 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/27 14:09:00 by tmurua           ###   ########.fr       */
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
	Zombie(std::string name)
	{
		this->name = name;
	}
	void	announce()
	{
		std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
	}
};

Zombie* newZombie(std::string name);

#endif
