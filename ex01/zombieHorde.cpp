/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:36:10 by amak              #+#    #+#             */
/*   Updated: 2024/05/03 21:49:09 by amak             ###   ########.fr       */
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
	for (int i = 0; i < N; i++) 
		horde[i].setName(name);
	return horde;	
}
