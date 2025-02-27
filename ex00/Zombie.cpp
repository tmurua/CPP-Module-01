/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:57:51 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/27 14:10:22 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// creates a zombie, names it, returns the zombie created.
Zombie* newZombie(std::string name)
{
	Zombie nZombie(name);

	return &nZombie;
}
