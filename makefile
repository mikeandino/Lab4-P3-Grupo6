main:	main.o Jugador.o buscamina.o
	g++ main.o Jugador.o buscamina.o -o main -lncurses
main.o:	main.cpp Jugador.h buscamina.h
	g++ -c main.cpp
Jugador.o:	Jugador.cpp Jugador.h
	g++ -c Jugador.cpp
buscamina.o: buscamina.cpp buscamina.h
	g++ -c buscamina.cpp
