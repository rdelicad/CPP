CXX =		g++
CXXFLAGS =	-Wall -Wextra -Werror -g -std=c++98
NAME=		brainz
SRC=		Zombie.cpp newZombie.cpp randomChump.cpp
OBJ=		$(SRC:.cpp=.o)
all:		$(NAME)
create_obj:
	@mkdir -p obj
vpath %.cpp src
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^
$(OBJ): %.o: %.cpp | create_obj
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ) $(NAME)
fclean: clean
	rm -f $(NAME)
run: $(NAME)
	./$(NAME)
.PHONY: all clean fclean run