#include "Plates.h"
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

Plates::Plates(){

}

Plates::Plates(string comment, int cantidadIng, int cantidadSabor, int preparado, int price, int valor){
    this->comentario = comment;
    this->cantidadIngredientes = cantidadIng;
    this->cantSabor = cantidadSabor;
    this->vecesPreparado = preparado;
    this->precioPlato = price;
    this->valoracionPlato = valor;
}

void Plates::setCantidadIngredientes(int cant){
    cantidadIngredientes = cant;
}

int Plates::getCantidadIngredientes(){
    return cantidadIngredientes;
}

void Plates::setComentario(string com){
    comentario = com;
}

string Plates::getComentario(){
    return comentario;
}

void Plates::setCantidadSabor(int cantS){
    cantSabor = cantS;
}

int Plates::getCantidadSabor(){
    return cantSabor;
}

int Plates::getVecesPreparado(){
    return vecesPreparado;
}

void Plates::setVecesPreparado(int veces){
    vecesPreparado = veces;
}

int Plates::getPrecioPlato(){
    return precioPlato;
}

void Plates::setPrecioPlato(int precioP){
    precioPlato = precioP;
}

int Plates::getValoracionPlato(){
    return valoracionPlato;
}

void Plates::setValoracionPlato(int valor){
    valoracionPlato = valor;
}


