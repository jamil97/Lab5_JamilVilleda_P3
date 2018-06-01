#include "Bodega.h"
#include "Ingredientes.h"

using namespace std;

Bodega::Bodega(){
}

void Bodega::setCantidadING(int cantidad){
    cantidadIngredientes = cantidad;
}

int Bodega::getCantidadING(){  
    return cantidadIngredientes;
}

int Bodega::getalgoING(int prueba){
    //return ingredientes[inn];
    return 0;
}


void Bodega::setalgoING(int prueba){
    //ingredientes.push_back(ing);
}