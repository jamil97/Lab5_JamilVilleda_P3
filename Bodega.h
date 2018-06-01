#ifndef BODEGA_H
#define BODEGA_H
#include "Ingredientes.h"
#include <string>
#include <vector>

using namespace std;

class Bodega {

    public:
        vector <Ingredientes*> ingredientes;
        int cantidadIngredientes;
        Bodega();
        void setCantidadING(int);
        int getCantidadING();
        int getalgoING(int);
        void setalgoING(int);
};
#endif


