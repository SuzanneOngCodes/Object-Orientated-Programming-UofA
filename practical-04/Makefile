# TEST MAKEFILE

mymake: main-2-1.cpp 
	g++ -o main-2-1 main-2-1.cpp 

mycode: main-2-1.cpp function-2-1.o
	g++ -o mycode main-2-1.cpp function-2-1.o 

function-2-1.o: function-2-1.cpp function-2-1.hpp 
	g++ -c function-2-1.cpp

test:
	./mycode < test.txt