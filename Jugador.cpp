#include "Jugador.h"

Jugador::Jugador(string nombre,string usuario,string clave,int puntuacion){
	this->nombre=nombre;
	this->usuario=usuario;
	this->clave=clave;
	this->puntuacion=puntuacion;
}
Jugador::Jugador(){

}void Jugador::setNombre(string nombre){
   this-> nombre=nombre;
}
string Jugador::getNombre(){
   return nombre;
}
void Jugador::setUsuario(string usuario){
   this-> usuario=usuario;
}
string Jugador::getUsuario(){
   return usuario;
}
void Jugador::setClave(string clave){
   this-> clave=clave;
}
string Jugador::getClave(){
   return clave;
}
void Jugador::setPuntuacion(int puntuacion){
   this-> puntuacion=puntuacion;
}
int Jugador::getPuntuacion(){
   return puntuacion;
}
