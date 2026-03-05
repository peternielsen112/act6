program: main.o GameCharacter.o
	g++ main.o GameCharacter.o -o program
main.o: main.cpp
	g++ -std=c++17 -c main.cpp
GameCharacter.o: GameCharacter.cpp
	g++ -std=c++17 -c GameCharacter.cpp
clean:
	rm -f *.o program
run: program
	./program
txt: program
	./program > output.txt