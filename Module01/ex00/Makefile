
SRC:= $(wildcard src/*.cpp)
OBJ:= $(patsubst src/%.cpp,obj/%.o,$(SRC))
ejecutable: $(OBJ)
	g++ -o $@ $^
obj/%.o: src/%.cpp
	g++ -o $@ -c $^ -I ./include
info:
	$(info $(SRC))
	$(info $(OBJ))