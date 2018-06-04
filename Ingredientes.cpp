#include "Ingredientes.h"
#include <string>

using namespace std;


Ingredientes::Ingredientes(){
}

Ingredientes::Ingredientes(string pNombre, string pTipo, int pcantSabor, int pfechaVencimiento){
    this->nombre = pNombre;
    this->tipo = pTipo;
    this->cantSabor = pcantSabor;
    this->fechaVencimiento = pfechaVencimiento;
}

void Ingredientes::setNombre(string name){
    nombre = name;
}

string Ingredientes::getNombre(){  
    return nombre;
}

void Ingredientes::setTipo(string type){
    tipo = type;
}

string Ingredientes::getTipo(){
    return tipo;
}

void Ingredientes::setCantidad(int cant){
    cantSabor = cant;
}

int Ingredientes::getCantidad(){
    return cantSabor;
}

void Ingredientes::setFechaVencimiento(int fecha){
    fechaVencimiento = fecha;
}

int Ingredientes::getFechaVencimiento(){
    return fechaVencimiento;
}


