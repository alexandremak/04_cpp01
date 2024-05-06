/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 23:10:11 by amak              #+#    #+#             */
/*   Updated: 2024/05/03 21:49:23 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
	private:
		std::string name;

	public:
		Zombie();
		Zombie(std::string zombieName);
		~Zombie();
		
		void	announce(void);
		void	setName(std::string zombieName);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
