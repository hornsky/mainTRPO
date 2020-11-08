all: hello

hello: main.o test.o

main.o:
	g++ -std=c++11 src/main.cpp -o src/main -lncurses

test.o:
	g++ -std=c++11 test/test.cpp -o test/test -lncurses

testrun:
	./test/test

run:
	./src/main

.PHONY: clean

clean:
	rm -rf src/*.o test/*.o
