# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 17:49:10 by rdelicad          #+#    #+#              #
#    Updated: 2024/03/26 17:56:55 by rdelicad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		= c++
CXXFLAG	= -Wall -Wextra -Werror -std=c++98 -Wshadow
NAME	= animal
SRC		= main.cpp Animal.hpp Animal.cpp
OBJ		= $(addprefix obj/,$(SRC:.cpp = .o))
all: $(NAME)
create_obj:
	@mkdir -p obj 
$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAG) -o $@ $^
$(OBJ): obj/%.o: %.cpp | create_obj
	$(CXX) $(CXXFLAG) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
	rm -rf obj
	rm -rf *.dSYM
	rm -f .DS_Store
re: fclean all
.PHONY: all clean fclean