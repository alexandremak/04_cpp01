# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amak <amak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/02 23:06:49 by amak              #+#    #+#              #
#    Updated: 2024/05/21 22:00:20 by amak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = 	Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp \
			main.cpp
			
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)
	
$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)
	
clean:
	@rm -f $(OBJECTS)
	@echo Deleted object files!

fclean: clean
	@rm -f $(NAME)
	@echo Deleted executable!

re: fclean all

.PHONY: all bonus clean fclean re