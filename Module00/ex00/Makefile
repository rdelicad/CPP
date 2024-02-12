# Variables
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98

# Nombre ejecutable
NAME = megaphone

# Archivos fuente
SRCS = megaphone.cpp

# Archivos objeto
OBJS = $(SRCS:.cpp=.o)

# Reglas por defecto
all: $(NAME)

# Regla para el ejecutable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla para los archivos objeto
$(OBJS): %.o: %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar los archivos generados
clean:
	rm -f $(OBJS) $(NAME)

fclean: clean
	rm -f $(NAME)

# Regla para ejecutar el programa
run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean run