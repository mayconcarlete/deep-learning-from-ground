TARGET=main
SOURCES=single_input_multiple_output.c main.c
OBJECTS=single_input_multiple_output.o main.o

build: objects
	gcc -Wall -Wextra -std=c11 $(OBJECTS) -o $(TARGET)

objects:
	gcc -Wall -Wextra -std=c11 -c $(SOURCES)

clean:
	rm main main.o single_input_multiple_output.o