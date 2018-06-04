#include <iostream>
#include <string>
#include "Bodega.h"
#include "Ingredientes.h"
#include "Plates.h"

int main(){

    string nombreIngrediente = "";
    string tipoIngrediente = "";
    int cantSabor = 0;
    int duracionIngrediente = 0;
    Bodega* bodega;
    Ingredientes* ingredientes;
    Plates* plates;
    int opcion = 0;

    cout<<"Bienvenido al programa, elija una opcion: "<<endl;
    cout<<"1. Comprar: "<<endl;
    cout<<"2. Agregar platos: "<<endl;
    cout<<"3. Agregar ingredientes: "<<endl;
    cout<<"4. Ver Bodega: "<<endl;
    cout<<"5. Salir"<<endl;
    cin>>opcion;
while(opcion!=5){
        switch(opcion){
        case 1: 


            break;
        case 2: 
          
            break;
        case 3:
            cout<<"Ingrese el nombre del ingrediente: "<<endl;
            cin>>nombreIngrediente;
            cout<<"Ingrese el tipo de ingrediente: (Lacteo, Vegetal, Frutas, Otros): "<<endl;
            cin>>tipoIngrediente;
            cout<<"Ingrese la cantidad de sabor que se le dara al plato: "<<endl;
            cin>>cantSabor;
            cout<<"Ingrese la duracion del ingrediente: "<<endl;
            cin>>duracionIngrediente;
            ingredientes = new Ingredientes(nombreIngrediente, tipoIngrediente, cantSabor, duracionIngrediente);
            bodega->setIngredientes(ingredientes);
            cout<<"Ingrediente agregado correctamente: "<<endl;

            break;
        case 4:


            break;
        case 5:


            break;
    }
}
   


}
