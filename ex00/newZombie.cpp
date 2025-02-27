/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:57:51 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/27 17:21:19 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// new operator creates object that stays around even after function ends
Zombie* newZombie(std::string name)
{
	Zombie* heapZombie = new Zombie(name); // new allocates Zombie in the heap
	return heapZombie;
}
