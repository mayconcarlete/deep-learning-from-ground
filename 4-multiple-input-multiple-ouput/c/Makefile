TARGET=main
SOURCES=multiple_input_multiple_output.c main.c
OBJECTS=multiple_input_multiple_output.o main.o

build: objects
	gcc -Wall -Wextra -std=c11 $(OBJECTS) -o $(TARGET)

objects:
	gcc -Wall -Wextra -std=c11 -c $(SOURCES)

clean:
	rm main main.o multiple_input_multiple_output.o