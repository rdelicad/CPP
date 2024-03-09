# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 17:16:47 by rdelicad          #+#    #+#              #
#    Updated: 2024/03/09 12:45:43 by rdelicad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g
NAME		= fixed
SRC			= main.cpp	Fixed.cpp
OBJ			= $(addprefix obj/,$(SRC:.cpp=.o))
all: $(NAME)
create_obj:
	mkdir -p obj
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^
$(OBJ): obj/%.o: %.cpp | create_obj
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean:
	rm -f $(NAME)
	rm -rf obj
	rm -rf *.dSYM
	rm -f .DS_Store
re: fclean all
PHONY: all clean fclean