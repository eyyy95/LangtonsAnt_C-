all: Project1

Project1: langtonsAntMain.o menuFunction.o Ant.o boardSpace.o Board.o 	
	g++ langtonsAntMain.o menuFunction.o Ant.o boardSpace.o Board.o -o Project1


menuFunction.o: menuFunction.cpp
	g++ -c menuFunction.cpp

langtonsAntMain.o: langtonsAntMain.cpp
	g++ -c langtonsAntMain.cpp
 
boardSpace.o: boardSpace.cpp
	g++ -c boardSpace.cpp

Ant.o: Ant.cpp
	g++ -c Ant.cpp

Board.o: Board.cpp
	g++ -c Board.cpp

clean: 
	rm *.o Project1
