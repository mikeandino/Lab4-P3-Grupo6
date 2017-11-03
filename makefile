main:    main.cpp Jugador.o 
	g++ main.cpp Jugador.o -o main
main.o:	main.cpp Jugador.h 
	g++ -c main.cpp
Jugador:	Jugador.cpp Jugador.h
	g++ -c Jugador.cpp
clean:
	rm  *.o main 