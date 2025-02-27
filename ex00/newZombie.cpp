/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:57:51 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/27 16:14:25 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// new operator creates an object that stays around even after function ends
Zombie* newZombie(std::string name)
{
	Zombie* nZombie = new Zombie(name);

	return nZombie;
}
