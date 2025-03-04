/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:42:30 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/04 16:52:14 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string	type;

public:
	Weapon(std::string type)
	{
		this->type = type;
	}

	const std::string &getType() // returns const reference (const std::string&)
	{
		return (type);
	}

	void setType(std::string new_type)
	{
		this->type = new_type; // update weapon's type
	}
};

#endif
