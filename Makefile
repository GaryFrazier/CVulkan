all:
	rm -rf bin
	mkdir -p bin
	gcc -Isrc/include -Lsrc/lib -g -Wall -o bin/cvulkan src/*.c \
		-lvulkan-1
		

