#pragma once
#include "Ingredientes.h"
#include <vector>
#include <string>

using namespace std;

class Platos
{
    public:
        vector<Ingredientes*>ingredientesPlatos;
        int cantidadIngredientes;
        string comentario;
        int cantSabor;
        int vecesPreparado;
        int precioPlato;
        int valoracionPlato;
        Platos();
        ~Platos();
        Platos(string, int, int, int, int, int);
        void setCantidadIngredientes(int);
        int getCantidadIngredientes();
        void setComentario(string);
        string getComentario();
        void setCantidadSabor(int);
        int getCantidadSabor();
        void setVecesPreparado(int);
        int  getVecesPreparado();
        int getPrecioPlato();
        void setPrecioPlato(int);
        int getValoracionPlato();
        void setValoracionPlato(int);

};


