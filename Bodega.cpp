#include "Bodega.h"
#include <vector>
#include <iostream>

using namespace std;

Bodega::Bodega(){

}

void Bodega::setCantidadIngredientes(int cantidad){
    cantidadIngredientes = cantidad;
}

int Bodega::getCantidadIngredientes(){  
    return cantidadIngredientes;
}

vector <Ingredientes*> Bodega:: getIngredientes(){
    return ingredientes;
}

void Bodega::setIngredientes(Ingredientes* ing){
    ingredientes.push_back(ing);
}
