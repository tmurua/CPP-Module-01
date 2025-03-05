/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:50:48 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/05 13:15:04 by tmurua           ###   ########.fr       */
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
	Weapon	*weaponB; // pointer to Weapon object weaponB (may be NULL)

	HumanB(std::string nameB);
	void setWeapon(Weapon &weaponB);
	void attack();
};

#endif
