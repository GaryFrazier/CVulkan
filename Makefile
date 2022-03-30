all:
	rm -rf bin
	mkdir -p bin
	cp src/lib/*.dll bin/
	gcc -Isrc/include -Lsrc/lib -g -Wall -o bin/openglc src/*.c \
		-lglfw3dll
		

