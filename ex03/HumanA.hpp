/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:50:48 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/04 17:10:19 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
public:
	std::string	nameA;
	Weapon	*weaponA; // pointer to Weapon object weaponA

	HumanA(std::string nameA, Weapon &weaponA) // object passed as reference!
	{
		this->nameA = nameA;
		this->weaponA = &weaponA; // store weapon reference as a pointer
	}
	void attack()
	{
		std::cout << nameA << " attacks with their " << weaponA->getType() << "\n";
	}
};

#endif
