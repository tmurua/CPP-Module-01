/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 22:31:55 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/27 17:12:45 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	randomChump("Mr. Stack");
	Zombie* heapZ = newZombie("Mr. Heap");
	heapZ->announce();
	delete heapZ;
}
