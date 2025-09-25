TARGET=main
SOURCES=simple_neural_network.c main.c
OBJECTS=simple_neural_network.o main.o

build: objects
	gcc -Wall -Wextra -std=c11 $(OBJECTS) -o main

objects:
	gcc -Wall -Wextra -std=c11 -c $(SOURCES)

clean:
	rm main main.o simple_neural_network.o