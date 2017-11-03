main:    main.o Jugador.o 
	g++ main.o Jugador.o -o main
main.o:	main.cpp Jugador.h 
	g++ -c main.cpp
Jugador.o:	Jugador.cpp Jugador.h
	g++ -c Jugador.cpp 
