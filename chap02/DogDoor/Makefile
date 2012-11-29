CXXFLAGS=-Wall -ggdb
all: DogDoor.o Remote.o
	g++ -c $(CXXFLAGS) main.cpp -o main.o
	g++ DogDoor.o Remote.o main.o -o dogdoor

DogDoor: DogDoor.cpp
	g++ -c $(CXXFLAGS) DogDoor.cpp -o DogDoor.o

Remote: Remote.cpp
	g++ -c $(CXXFLAGS) Remote.cpp -o Remote.o
clean:
	rm -rf dogdoor *.o
