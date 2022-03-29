all:
	mkdir -p bin
	gcc -g -Wall -o bin/cvulkan src/*.c

