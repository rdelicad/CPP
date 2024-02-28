# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/27 14:25:20 by rdelicad          #+#    #+#              #
#    Updated: 2024/02/27 14:25:22 by rdelicad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
NAME = account
SRCS = account.cpp tests.cpp
OBJS = $(addprefix obj/,$(SRCS:.cpp=.o))
all: $(NAME)
create_obj:
	@mkdir -p obj
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^
$(OBJS): obj/%.o: %.cpp | create_obj
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS) $(NAME)
fclean: clean
	rm -f $(NAME)
run: $(NAME)
	./$(NAME)
.PHONY: all clean fclean run
