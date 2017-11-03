#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H
class Jugador{
	protected:
		string nombre;
		string usuario;
		string clave;
		int puntuacion;
	public:
		Jugador(string,string,string,int);
		Jugador();
		string getNombre();
		void setNombre(string);

		string getUsuario();
		void setUsuario(string);

		string getClave();
		void setClave(string);

		int getPuntuacion();
		void setPuntuacion(int);

};
#endif