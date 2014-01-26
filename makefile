CC=g++
CFLAGS = -c -g -Wall -o
OBJECTS = bin/complexmain.o bin/complex.o
#g++ FLAGS -lUnitTest++ FILE -o OBJECT

all: complex

complex: $(OBJECTS)
	$(CC) -o ./bin/complex $(OBJECTS) -lUnitTest++
	
bin/complexmain.o:
	$(CC) $(CFLAGS) ./bin/complexmain.o complexmain.cpp
	
bin/complex.o:
	$(CC) $(CFLAGS) ./bin/complex.o complex.cpp
	
clean:
	rm -f ./bin/*
