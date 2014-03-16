CC = g++

all: lab1.cpp dict.cpp
	$(CC) lab1.cpp dict.cpp -o dict
clean:
	rm -f dict *~ *.o tmp/*

