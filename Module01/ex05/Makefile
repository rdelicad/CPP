# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 12:46:36 by rdelicad          #+#    #+#              #
#    Updated: 2024/03/04 12:53:03 by rdelicad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98
NAME		= harl
SRC			= main.cpp Harl.cpp
OBJ			= $(addprefix obj/,$(SRC:.cpp=.o))
all:
create_obj:
	@mkdir -p obj
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^
$(OBJ): obj/%.o: %.cpp | create_obj
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ) $(NAME)
fclean: clean
	rm -f $(NAME)
	rm -rf obj
	rm -rf *.dSYM
	rm -f .DS_Store
.PHONY: all clean fclean 