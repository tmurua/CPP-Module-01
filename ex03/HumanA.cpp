/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:02:01 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/05 13:06:28 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nameA, Weapon &weaponA) // object Weapon passed as reference
{
	this->nameA = nameA;
	this->weaponA = &weaponA; // store the address of weaponA
}

void	HumanA::attack()
{
	std::cout << nameA << " attacks with their " << weaponA->getType() << "\n";
}
