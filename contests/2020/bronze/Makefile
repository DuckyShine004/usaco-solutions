CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Wshadow -fmax-errors=2

TARGET = $(basename $(SRC))

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)


