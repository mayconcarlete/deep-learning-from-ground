.PHONY: build

TARGET=main
SOURCES=single_input_multiple_output.cpp main.cpp
OBJECTS=single_input_multiple_output.o main.o

build: objects
	g++ -Wall -Wextra -std=c++23 $(OBJECTS) -o $(TARGET)
objects:
	g++ -Wall -Wextra -std=c++23 -c $(SOURCES)

clean:
	rm main main.o single_input_multiple_output.o