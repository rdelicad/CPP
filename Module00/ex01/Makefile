# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 15:03:25 by rdelicad          #+#    #+#              #
#    Updated: 2024/02/14 15:04:07 by rdelicad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -g --std=c++98 -Iinclude
NAME = agenda
SRCS = PhoneBook.cpp Contact.cpp main.cpp
OBJS = $(addprefix obj/,$(SRCS:.cpp=.o))
all: $(NAME)
create_dir:
	@mkdir -p obj
vpath %.cpp src
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^
$(OBJS): obj/%.o: %.cpp | create_dir 
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS) $(NAME)
fclean: clean
	rm -f $(NAME)
run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean run