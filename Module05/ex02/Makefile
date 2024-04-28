# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 13:33:45 by rdelicad          #+#    #+#              #
#    Updated: 2024/04/28 10:33:19 by rdelicad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAG = -Wall -Wextra -Werror -std=c++98 -Wshadow -g
NAME = buro
SRC = main.cpp Bureaucrat.cpp Form.cpp
SRCS = $(addprefix src/, $(SRC))
OBJS = $(addprefix obj/, $(SRC:.cpp=.o))
all: $(NAME)
create_obj:
	@mkdir -p obj
$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAG) -o $@ $^
$(OBJS): obj/%.o: src/%.cpp | create_obj
	$(CXX) $(CXXFLAG) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
	rm -rf obj
	rm -rf *.dSYM
	rm -f .DS_Store
re: fclean all
.PHONY: all clean fclean