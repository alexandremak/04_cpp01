/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:36:10 by amak              #+#    #+#             */
/*   Updated: 2024/05/09 21:06:48 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	if (N < 1)
	{
		std::cout << "Invalid number of zombies!" << std::endl;
		return NULL;
	}

	Zombie *horde = new Zombie[N];
	if (!horde)
		return NULL;
	for (int i = 0; i < N; i++) 
		horde[i].setName(name);
	return horde;	
}
