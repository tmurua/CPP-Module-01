/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:50:48 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/04 17:13:15 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
	std::string	nameB;
	Weapon	*weaponB; // pointer to Weapon object weaponB

	HumanB(std::string nameB)
	{
		this->nameB = nameB;
	}
	void setWeapon(Weapon &weaponB) // object passed as reference!
	{
		this->weaponB = &weaponB; // store weapon reference as a pointer
	}
	void attack()
	{
		std::cout << nameB << " attacks with their " << weaponB->getType() << "\n";
	}
};

#endif
