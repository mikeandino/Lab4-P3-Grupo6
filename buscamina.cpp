#include "buscamina.h"
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>

using namespace std;

BuscaMinas::BuscaMinas(int psize,int pminas){
	this->size=psize;
	this->minas=pminas;
	tabla = new int*[size];
	for(int i=0;i<size;i++){
		tabla[i]=new int[size];
	}
	userend = new char*[size];
	for(int i=0;i<size;i++){
		userend[i]= new char[size];
	}
}

int BuscaMinas::getSize(){
	return size;
}

void BuscaMinas::setSize(int psize){
	size=psize;
}

int BuscaMinas::getMinas(){
	return minas;
}

void BuscaMinas::setMinas(int pminas){
	minas = pminas;
}

int juego(){
	srand(time(NULL));
	for(int i=0;i<minas;i++){
		int x=rand()%size;
		int y=rand()%size
		if(tabla[y][x]==-1){
			i--;
		}else{
			tabla[y][x]=-1;
		}
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			
		}
	}
	turno();
	int puntaje=0;
	return puntaje;
}

void turno{

}

void recursivo(){
 
}
