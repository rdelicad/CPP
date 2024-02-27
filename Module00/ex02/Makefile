
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
NAME = account
SRCS = account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)
all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^
$(OBJS): %.o: %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS) $(NAME)
fclean: clean
	rm -f $(NAME)
run: $(NAME)
	./$(NAME)
.PHONY: all clean fclean run