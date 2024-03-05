# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 19:56:05 by rdelicad          #+#    #+#              #
#    Updated: 2024/03/05 20:03:33 by rdelicad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98
NAME		= fixed
SRC			= main.cpp Fixed.cpp
OBJ			= $(addprefix obj/,$(SRC:.cpp=.o))
all: $(NAME)
create_obj:
	@mkdir -p obj
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^
$(OBJ): obj/%.o: %.cpp | create_obj
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(NAME) $(OBJ)
	rm -f $(NAME)
	rm -rf obj
	rm -rf *.dSYM
	rm -f .DS_Store
PHONY: all clean fclean