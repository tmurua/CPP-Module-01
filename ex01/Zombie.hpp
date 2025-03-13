/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:44:31 by tmurua            #+#    #+#             */
/*   Updated: 2025/03/13 11:06:36 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	void	give_name(std::string name);
	void	announce();
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif
