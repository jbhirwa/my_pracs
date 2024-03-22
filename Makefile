CC := g++
CFLAGS := -std=c++11

SRC := main-1-1.cpp main-1-2.cpp main-1-3.cpp main-1-4.cpp function-1-1.cpp function-1-2.cpp function-1-3.cpp function-1-4.cpp
OBJ := $(SRC:.cpp=.o)
EXE := program

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp Person.h
	$(CC) $(CFLAGS) -c $< -o $@

run: $(EXE)
	./$(EXE)

clean:
	rm -f $(OBJ) $(EXE)

# CC := g++
# CFLAGS := -Wall -Wextra -std=c++11

# SRC := main.cpp printArray.cpp arrayMax.cpp changeValue.cpp dynamicArray.cpp
# OBJ := $(SRC:.cpp=.o)
# EXE := workshop

# all: $(EXE)

# $(EXE): $(OBJ)
# 	$(CC) $(CFLAGS) -o $@ $^

# %.o: %.cpp workshop.h
# 	$(CC) $(CFLAGS) -c $< -o $@

# run: $(EXE)
# 	./$(EXE)

# clean:
# 	rm -f $(OBJ) $(EXE)