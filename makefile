CC=g++
CCFLAGS=-ftemplate-backtrace-limit=0

run:	vm.h vm.cpp
	$(CC) -o vm vm.cpp
	./vm

test: vm.h tests.cpp
	$(CC) -c tests.cpp