CC=g++

run:	vm.h vm.cpp
	$(CC) -o vm vm.cpp
	./vm
