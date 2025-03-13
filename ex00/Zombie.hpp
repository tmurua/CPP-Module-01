/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 22:18:59 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/13 11:00:15 by tmurua           ###   ########.fr       */
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
	Zombie(std::string name);
	void	announce();
	~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
