# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 17:49:10 by rdelicad          #+#    #+#              #
#    Updated: 2024/03/26 20:50:31 by rdelicad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		= c++
CXXFLAG	= -Wall -Wextra -Werror -std=c++98 -Wshadow -Iincludes
NAME	= animal
SRC		= main.cpp Animal.cpp Dog.cpp Cat.cpp \
		WrongAnimal.cpp WrongCat.cpp
SRCS	= $(addprefix src/, $(SRC))
OBJS	= $(addprefix obj/, $(SRC:.cpp=.o))
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