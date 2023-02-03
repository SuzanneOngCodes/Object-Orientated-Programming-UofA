mymake: main.cpp
	g++ -o main.cpp main

LibraryDriver: main.cpp Book.cpp Library.cpp
	g++ -std=c++11 -o LibraryDriver Book.cpp Library.cpp main.cpp

function-2-1.o: function-2-1.cpp function-2-1.hpp 
	g++ -c function-2-1.cpp

test:
	./LibraryDriver < test.txt