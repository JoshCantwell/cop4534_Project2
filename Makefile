# the compiler; gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
# -g adds debugging information to the executable file
# -Wall turns of most, but not all, compiler warnings
CXXFLAGS= -std=c++11 -g -Wall

OBJECTS = PriorityQueue.o Simulation.o Customer.o main.o
HEADERS := $(shell find . -path ./test -prune -o -name "*.h" -print)

main: main.o $(OBJECTS)
				$(CC) $(CXXFLAGS) -o $@ $^

$(OBJECTS): $(HEADERS)

testBuild: $(OBJECTS)
	$(CC) $(CXXFLAGS) -Itest/catch/catch.hpp -o test/TestCase $(OBJECTS) test/TestCase.cpp

test: clean testBuild
	test/TestCase --success

clean:
	$(RM) *.o *.gch core main test/TestCase
