#ifndef BUSCAMINA_H
#define BUSCAMINA_H

#include <string>
using namespace std;

class BuscaMinas{
	private:
		int size;
		int minas;
		int** tabla;
		char** userend;
	public:
		BuscaMinas(int,int);
		//Size getters and setter
		int getSize();
		void setSize(int);
		//Minas getter and setter
		int getMinas();
		void setMinas(int);
		int juego();
		void turno();
		void recursivo();
		~BuscaMinas();//Destructor
};
#endif
