#ifndef BODEGA_H
#define BODEGA_H
#include <iostream>
#include "Ingredientes.h"
#include <string>
#include <vector>

using namespace std;

class Bodega {

    public:
        vector <Ingredientes> ingredientes;
        int cantidadIngredientes;

    public:
    
        Bodega();
        void setCantidadIngredientes(int);
        int getCantidadIngredientes();
        Ingredientes getIngredientes(int);
        void setIngredientes(Ingredientes); 
};

#endif


