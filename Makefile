CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
SRC = src/main.cpp src/calculator.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = app
LIB = libcalculator.a

all: $(LIB) $(TARGET)

$(LIB): src/calculator.o
	ar rcs $(LIB) src/calculator.o

$(TARGET): src/main.o $(LIB)
	$(CXX) $(CXXFLAGS) src/main.o -L. -lcalculator -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(TARGET) $(LIB)
