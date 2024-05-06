/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:19:20 by amak              #+#    #+#             */
/*   Updated: 2024/05/06 23:40:55 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
	if (argc <= 3) {
		std::cout << "Error: invalid number of parameters!" << std::endl;
		return (1);
	}
	
	std::ofstream	filename(argv[1], std::ios::app);
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);

	if(filename.is_open()) {
		filename
	}
	else {
		std::cout << "Error: insert a valid filename!" << std::endl;
		return (1);
	}
}
