# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/22 08:56:41 by rdelicad          #+#    #+#              #
#    Updated: 2024/05/23 16:04:22 by rdelicad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAG = -Wall -Wextra -Werror -std=c++98 -Wshadow -g

NAME = vector
SRC = main.cpp
HEADERS = easyfind.hpp

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAG) -o $(NAME) $(SRC)
	
clean:
	rm -f $(NAME)
	
fclean: clean
	
re: fclean all

.PHONY: all clean fclean re