CC=g++
CFLAGS = -c -g -Wall -o
OBJECTS = bin/complexmain.o bin/complex.o
#g++ FLAGS -lUnitTest++ FILE -o OBJECT

all: bin/complex

bin/complex: $(OBJECTS)
	$(CC) -o ./bin/complex $(OBJECTS) -lUnitTest++
	
bin/complexmain.o: complexmain.cpp
	$(CC) $(CFLAGS) ./bin/complexmain.o complexmain.cpp
	
bin/complex.o: complex.cpp
	$(CC) $(CFLAGS) ./bin/complex.o complex.cpp
	
clean:
	rm -f ./bin/*
