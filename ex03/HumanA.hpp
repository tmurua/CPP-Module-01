/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:50:48 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/05 13:06:42 by tmurua           ###   ########.fr       */
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

	HumanA(std::string nameA, Weapon &weaponA);
	void attack();
};

#endif
