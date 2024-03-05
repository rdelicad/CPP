# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 08:39:08 by rdelicad          #+#    #+#              #
#    Updated: 2024/03/05 08:53:03 by rdelicad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -g
NAME		=  harlFilter
SRC			= main.cpp Harl.cpp
OBJ			= $(addprefix obj/,$(SRC:.cpp=.o))
all: $(NAME)
create_dir: 
	@mkdir -p obj
$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^
$(OBJ): obj/%.o: %.cpp | create_dir
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -r $(NAME) $(OBJ)
fclean: clean
	rm -f $(NAME)
	rm -rf obj
	rm -rf *.dSYM
	rm -f .DS_Store
PHONY: all clean fclean