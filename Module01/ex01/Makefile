# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 16:12:54 by rdelicad          #+#    #+#              #
#    Updated: 2024/02/28 16:12:57 by rdelicad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX =		g++
CXXFLAGS =	-Wall -Wextra -Werror -g -std=c++98 
NAME=		zombie
SRC=		main.cpp Zombie.cpp zombieHorde.cpp
OBJ=		$(addprefix obj/,$(SRC:.cpp=.o))
all:		$(NAME)
create_obj:
	@mkdir -p obj
#vpath %.cpp src
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^
$(OBJ): obj/%.o: %.cpp | create_obj
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ) $(NAME)
fclean: clean
	rm -f $(NAME)
.PHONY: all clean fclean run