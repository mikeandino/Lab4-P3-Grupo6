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
	initscr();
	WINDOW* win = newwin(6,6,5,5);
	vector <Jugador> jugadores;
	int menu1=0;
	while(menu1!=5){
		move(0,0);
		mvprintw(0,0,"Bienvenido al sistema\n");
		mvprintw(1,0,"1)Agregar Persona");
		mvprintw(2,0,"2)Eliminar persona");
		mvprintw(3,0,"3) Eliminar Persona");
		mvprintw(4,0,"4) JUGAR");
		mvprintw(5,0,"5) SALIR");
		mvprintw(6,0,"Ingrese su opcion: ");
		wrefresh(win);
		menu1=getch()-48;
		while(menu1<1||menu1>5){
			clear();
			mvprintw(0,0,"Numero no valido");
			mvprintw(1,0,"Ingrese otra opcion: ");
			menu1=getch();
		}
		if(menu1==1){
			clear();


		}
		if(menu1==2){
			clear();
		}
		if(menu1==3){
		    clear();
		}
		if(menu1==4){
			clear();
		}
		getch();
		endwin();
	}//fin de while
	return 0;
}
int** crear(int size){
	int** mat = new int*[size];
	for(int i=0;i<size;i++){
		mat[i]= new int[size];
	}
	return mat;


}
int** llenar(int** matriz, int size){
	for(int i =0;i<size;i++){
		for(int j=0;j<size;j++){
			matriz[i][j]=0;
		}
	}
}void prueba(int** mat,int x, int y,int size){
	if(mat[x][y]!=0){
		
	}else{
		if(x<size-1){
			if(mat[x][y]==0 ){

			}
		}
	}
			
}
void print(){
	initscr();
	noecho();
	WINDOW* win = newwin(6,6,5,5);
	for(int i=1;i<6;i++){
		for(int j=1;j<6;j++){
			string temp="1";
			mvwprintw(win,i,j, temp.c_str());
			wrefresh(win);
			getch();
		}
	}	
	endwin();
}

