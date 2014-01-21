all:
	g++ -c -g -Wall -o ./bin/complexmain.o complexmain.cpp
	g++ -c -g -Wall -o ./bin/complex.o complex.cpp
	g++ -o ./bin/complex ./bin/complex.o ./bin/complexmain.o
