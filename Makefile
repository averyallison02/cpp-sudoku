CXX=g++

lGTEST=-lgtest_main -lgtest
fGTEST=--gtest_filter

all: board

exe: board
	${CXX} -o sudoku *.o	

board: board.cpp
	${CXX} -c -o board.o board.cpp

test: all test/*.cpp
	${CXX} -o tests *.o test/*.cpp ${lGTEST}
	./tests

test-board:
	${CXX} -o tests board.o test/test-board.cpp ${lGTEST}
	./tests
