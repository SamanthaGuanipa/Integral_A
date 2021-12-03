#ifndef SORTS_H_
#define SORTS_H_

#include <vector>
#include <iostream>
#include <string>
#include <list>
#include "objetos.h"

using namespace std; 

//Se crea la clase Sorts
template <class T>
class Sorts{
    public:
        void ordenaBurbuja(vector<T> &vector);
        void lectura();

    private:
        void swap(vector<T> &v, int i, int j);
};
//Se realiza un swap
template <class T>
void Sorts<T>::swap(vector<T> &v, int i, int j) {
    T aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

/*se crea la funcion ordenaBurbuja que ordenara de menor a mayor los elementos del vector,
mas adelante se usara en el main para ordenar un vector de tipo objeto con los pedidos*/
template <class T>
void Sorts<T>::ordenaBurbuja(vector<T> &vector){
  for(int i = 1; i<vector.size(); i++){
    for(int j = 1; j<vector.size()-1; j++){
      if (vector[j].getCantidad()>vector[j+1].getCantidad()){
        swap(vector, j, j+1);
      }
    }
  }

}
 







#endif