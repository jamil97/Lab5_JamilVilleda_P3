#ifndef BODEGA_H
#define BODEGA_H
#include <iostream>
#include "Ingredientes.h"
#include <string>
#include <vector>

using namespace std;

class Bodega {

    public:
        vector <Ingredientes*> ingredientes;
        int cantidadIngredientes;
        vector <Ingredientes*> getIngredientes();

        Bodega();
        void setCantidadIngredientes(int);
        int getCantidadIngredientes();
        void setIngredientes(Ingredientes*); 
};
#endif


