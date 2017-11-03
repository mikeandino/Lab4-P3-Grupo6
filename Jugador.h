#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <string>

using namespace std;

class Jugador{
	protected:
		string nombre;
		string usuario;
		string clave;
		int puntuacion;
	public:
		//Constructor
		Jugador(string,string,string,int);
		Jugador();
		//Nombre set y get
		string getNombre();
		void setNombre(string);
		//Usuario set y get 
		string getUsuario();
		void setUsuario(string);
		//Clave set y get
		string getClave();
		void setClave(string);
		//Puntuacion set y get
		int getPuntuacion();
		void setPuntuacion(int);
		//Destructor
		~Jugador();
};
#endif
