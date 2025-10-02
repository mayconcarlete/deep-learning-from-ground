.PHONY: build

build: object
	g++ -Wall -Wextra -std=c++23 multiple_input_single_output.o main.o  -o main

object:
	g++ -Wall -Wextra -std=c++23 -c multiple_input_single_output.cpp main.cpp

clean:
	rm main main.o multiple_input_single_output.o