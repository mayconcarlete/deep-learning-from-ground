TARGET=main
SOURCES=simple_neural_network.c
OBJECTS=simple_neural_network.o

build: objects
	gcc -Wall -Wextra -std=c11 $(OBJECTS) main.c -o main

objects:
	gcc -Wall -Wextra -std=c11 -c $(SOURCES) -o $(OBJECTS)