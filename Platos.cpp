#include "Platos.h"
#include <string>
#include "Ingredientes.h"
#include <vector>
using namespace std;

/*
Platos::Platos(){

}

Platos::Platos(string comentarios, int cantIngredientes, int cantidadSabor, int preparado, int precioP, int valorPlato){
this->cometario = comentarios;
this->cantidadIngredientes = cantIngredientes;
this->cantSabor = cantidadSabor;
this->vecesPreparado = preparado;
this->precioPlato = precioP;
this->valoracionPlato = valorPlato;
}

void Platos::setCantidadIngredientes(int cantidad){
    cantidadIngredientes = cantidad;
}
int Platos::getCantidadIngredientes(){
    return cantidadIngredientes;
}

void Platos::setComentario(string coment){
    comentario = coment;
} 
string Platos::getComentario(){
    return comentario;
}

void Platos::setCantidadSabor(int sabor){
    cantSabor = sabor;
}
int Platos::getCantidadSabor(){
    return cantSabor;
}
void Platos::setVecesPreparado(int preparado){
    vecesPreparado = preparado;
}   
int Platos::getVecesPreparado(){
   return vecesPreparado;
}

int Platos::getPrecioPlato(){
   return precioPlato;
}
void Platos::setPrecioPlato(int precio){
    precioPlato = precio;
}
int Platos::getValoracionPlato(){
    return valoracionPlato;
}
void Platos::setValoracionPlato(int valor){
    valoracionPlato = valor;
}
*/


Platos::Platos(){
}

Platos::~Platos(){
    
}

Platos::Platos(string comment, int cantidadIng, int cantidadSabor, int preparado, int price, int valor){
    this->comentario = comment;
    this->cantidadIngredientes = cantidadIng;
    this->cantSabor = cantidadSabor;
    this->vecesPreparado = preparado;
    this->precioPlato = price;
    this->valoracionPlato = valor;
}

void Platos::setCantidadIngredientes(int cant){
    cantidadIngredientes = cant;
}

int Platos::getCantidadIngredientes(){
    return cantidadIngredientes;
}

void Platos::setComentario(string com){
    comentario = com;
}

string Platos::getComentario(){
    return comentario;
}

void Platos::setCantidadSabor(int cantS){
    cantSabor = cantS;
}

int Platos::getCantidadSabor(){
    return cantSabor;
}

int Platos::getVecesPreparado(){
    return vecesPreparado;
}

void Platos::setVecesPreparado(int veces){
    vecesPreparado = veces;
}

int Platos::getPrecioPlato(){
    return precioPlato;
}

void Platos::setPrecioPlato(int precioP){
    precioPlato = precioP;
}

int Platos::getValoracionPlato(){
    return valoracionPlato;
}

void Platos::setValoracionPlato(int valor){
    valoracionPlato = valor;
}


