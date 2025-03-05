/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:08:09 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/05 13:13:55 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nameB)
{
	this->nameB = nameB;
	this->weaponB = NULL; // initially, HumanB has no weapon
}

void	HumanB::setWeapon(Weapon &weaponB) // object Weapon passed as reference
{
	this->weaponB = &weaponB; // store the address of weaponB
}

void	HumanB::attack()
{
	if (weaponB == NULL)
		std::cout << nameB << " attacks with NO WEAPON \n";
	else
		std::cout << nameB << " attacks with their " << weaponB->getType() << "\n";
}
