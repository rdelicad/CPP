# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 16:12:39 by rdelicad          #+#    #+#              #
#    Updated: 2024/03/07 15:08:29 by rdelicad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX =		c++
CXXFLAGS =	-Wall -Wextra -Werror -g -std=c++98 
NAME=		zombie
SRC=		main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
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
	rm -rf obj
.PHONY: all clean fclean run