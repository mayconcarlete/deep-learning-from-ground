.PHONY: build

TARGET=main
SOURCES=simple_neural_network.cpp main.cpp
OBJECTS=simple_neural_network.o main.o

build: objects
	g++ -Wall -Wextra -std=c++23 $(OBJECTS) -o $(TARGET)
objects:
	g++ -Wall -Wextra -std=c++23 -c $(SOURCES)

clean:
	rm main main.o simple_neural_network.o