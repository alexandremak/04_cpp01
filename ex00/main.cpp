/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 23:10:09 by amak              #+#    #+#             */
/*   Updated: 2024/05/20 21:56:30 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie stackZombie("Stack Zombie");
	stackZombie.announce();
	
	Zombie *heapZombie = newZombie("Heap Zombie");
	if (heapZombie) {
		heapZombie->announce();
		delete heapZombie;
	}
	randomChump("Random Chump Zombie");	
}
