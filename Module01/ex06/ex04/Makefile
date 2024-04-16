# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 16:12:54 by rdelicad          #+#    #+#              #
#    Updated: 2024/03/07 18:06:02 by rdelicad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX =		c++
CXXFLAGS =	-Wall -Wextra -Werror -g -std=c++98 
NAME=		replace
SRC=		main.cpp
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
	rm -rf $(OBJ)
fclean: clean
	rm -f $(NAME)
	rm -rf obj
	rm -rf *.dSYM
	rm -f .DS_Store
	rm -f *.replace
re: fclean all
.PHONY: all clean fclean 