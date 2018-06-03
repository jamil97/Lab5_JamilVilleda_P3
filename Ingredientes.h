#ifndef INGREDIENTES_H
#define INGREDIENTES_H
#include "Plates.h"
#include <string>

using namespace std;

class Ingredientes {

    public:
        string nombre;
        string tipo;
        int cantSabor;
        int fechaVencimiento;

    public:

        Ingredientes();
        Ingredientes(string, string, int, int);
        void setNombre(string);
        string getNombre();
        void setTipo(string);
        string getTipo();
        void setCantidad(int);
        int getCantidad();
        void setFechaVencimiento(int);
        int getFechaVencimiento();
};

#endif