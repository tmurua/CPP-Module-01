/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:19:14 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/27 17:23:26 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// no manual deletion required, object's automatically destroyed when function returns
void	randomChump(std::string name)
{
	Zombie stackZombie(name); // Zombie is created on the stack, not in the heap
	stackZombie.announce();

}
