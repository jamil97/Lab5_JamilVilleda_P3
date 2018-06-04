#include "Bodega.h"
#include <vector>

using namespace std;

Bodega::Bodega(){

}

void Bodega::setCantidadIngredientes(int cantidad){
    cantidadIngredientes = cantidad;
}

int Bodega::getCantidadIngredientes(){  
    return cantidadIngredientes;
}

Ingredientes* Bodega::getIngredientes(int i){
    return ingredientes[i];
 }

void Bodega::setIngredientes(Ingredientes* ing){
    ingredientes.push_back(ing);
}
