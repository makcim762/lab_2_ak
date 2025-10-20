CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = cmd_parce_app
SRC = src/main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
