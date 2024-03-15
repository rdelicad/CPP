# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 07:23:16 by rdelicad          #+#    #+#              #
#    Updated: 2024/03/15 07:29:35 by rdelicad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98
NAME		= trap
SRCS		= main.cpp ClapTrap.hpp ClapTrap.cpp
OBJS		= $(addprefix obj/,$(SRCS:.cpp=.o))
all: $(NAME)
create_obj:
	@mkdir -p obj
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
$(OBJS): obj/%.o: %.cpp | create_obj
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -f $(NAME)
	m -rf obj
	rm -rf *.dSYM
	rm -f .DS_Store
re: fclean all
.PHONY: all clean fclean re