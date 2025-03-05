/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:42:47 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/05 13:01:38 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const	std::string &Weapon::getType()
{
	return (type); // returns const reference (const std::string& type)
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type; // update weapon's type
}
