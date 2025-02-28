/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:23:15 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/28 17:08:11 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{

	Zombie*	horde = new Zombie[N]; // allocate array of N Zombies on the heap
	int		i = 0;

	while (i < N)
	{
		horde[i].give_name(name);
		// horde->announce();
		i++;
	}
	return horde;
}
