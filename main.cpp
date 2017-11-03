#include <iostream>
#include <string>
#include "Jugador.h"
#include <vector>
#include <ncurses.h>
#include "buscamina.h"
#include <ncurses.h>

using namespace std;


//matriz con su size(matriz jugar,matriz llena, size)



int main(){
	vector<Jugador> jugadores;
	int menu1=0;
	while(menu1!=5){
		move(0,0);
		mvprintw(0,0,"Bienvenido al sistema\n");
		mvprintw(1,0,"1)Agregar Persona");
		mvprintw(2,0,"2)Eliminar persona");
		mvprintw(3,0,"3) Eliminar Persona");
		mvprintw(4,0,"4) JUGAR");
		mvprintw(5,0,"5) SALIR");
		mvprintw(6,0,"Ingrese su opcion");
		cin>>menu1;
		if(menu1==1){
			//werase(::::);
		}
		if(menu1==2){
			//werase(::::);
		}
		if(menu1==3){
			//werase(::::);
		}
		if(menu1==4){
			//werase(::::);
		}
		refresh();
		getch();
		endwin();
	}//fin de while
	return 0;
}







