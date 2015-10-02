DynamicArray: main.o DynamicArray.h DynamicArray.o
	c++ -static -g  DynamicArray.o main.o -o DynamicArray

main.o: main.cpp
	c++ -g -Wall -c main.cpp

DynamicArray.o: DynamicNode.h DynamicArray.h DynamicArray.cpp
	c++ -g -Wall -c DynamicArray.cpp

run:
	./DynamicArray

clean: 
	rm *.o