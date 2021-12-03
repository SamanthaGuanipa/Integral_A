#ifndef OBJETOS_H_
#define OBJETOS_H_

#include <vector>
#include <iostream>
#include <string>
#include <list>

using namespace std; 

//Se crea la clase Objetos
class Objetos{
    public:
        
        //getters 
        int getLlegada(){ return llegada;} 
        int getCantidad(){ return cantidad;}
        string getNombre(){ return nombre;}
        string getPedido(){ return pedido;}
        
        //Se crea la función crear, para crear los objetos
        void crear(int l, int c, string n, string p){
          
          llegada=l;
          cantidad=c; 
          nombre=n; 
          pedido=p;

        }; 
        Objetos *next;

    private:

    int llegada;
    int cantidad;
    string nombre, pedido;

        
};




#endif 