/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:19:20 by amak              #+#    #+#             */
/*   Updated: 2024/05/07 23:22:37 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

static void	ft_replace(std::ifstream *input, std::ofstream *output, 
	const std::string &original, const std::string &modified) {
	std::string line;
	
	while(std::getline(*input, line)) {
		int flagReplace = line.find(original);
		if (line.length() < 1) {
			*output << std::endl;
			continue;
		}
		while (flagReplace != std::string::npos) {
			*output << line.substr(0, flagReplace);
			*output << modified;
			line = line.substr(flagReplace + original.length());
			flagReplace = line.find(original);
		}
		*output << line;
		if (!input->eof())
			*output << std::endl;
	}
}

int main(int argc, char **argv) {
	if (argc <= 3) {
		std::cout << "Error: invalid number of parameters!" << std::endl;
		return (1);
	}
	
	std::string 	inputFile(argv[1]);
	std::ifstream	input(inputFile.c_str());
	
	if (!input) {
		std::cout << "Error: insert a valid filename!" << std::endl;
		return (1);
	}

	std::string		s1(argv[2]);
	std::string		s2(argv[3]);

	if (s1.length() < 1) {
		std::cout << "Error: string to replace cannot be empty!" << std::endl;
		return (1);
	}
	
	std::string		outputFile = inputFile + ".replace"; 
	std::ofstream	output(outputFile, std::ios::app);
	
	if (!output) {
		std::cout << "Error: unable to create output file!" << std::endl;
		return (1);
	}
	
	ft_replace(&input, &output, s1, s2);
	
	input.close();
	output.close();
	return (0);
}
