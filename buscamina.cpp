#include "buscamina.h"
#include <iostream>
#include <math.h>
#include <time.h>
Buscaminas::Buscaminas(int psize,int pminas){
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

void BuscaMinas::setSize(psize){
	size=psize;
}

int BuscaMinas::getMinas(){
	return minas;
}

void setMinas(int pminas){
	minas = pminas;
}

int juego(){
	srand(time(NULL));
	int random=rand()%2

}

void recursivo(){

}
