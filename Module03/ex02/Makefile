# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 07:23:16 by rdelicad          #+#    #+#              #
#    Updated: 2024/03/21 20:51:01 by rdelicad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98 -Wshadow
NAME		= trap
SRC			= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ			= $(addprefix obj/,$(SRC:.cpp=.o))
all: $(NAME)
create_obj:
	@mkdir -p obj
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^
$(OBJ): obj/%.o: %.cpp | create_obj
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
	rm -rf obj
	rm -rf *.dSYM
	rm -f .DS_Store
re: fclean all
.PHONY: all clean fclean