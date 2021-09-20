#define SORTS_H_

#include <vector>
#include <iostream>
#include <list>
using namespace std; 

template <class T>
class Sorts{
    public:
        void ordenaBurbuja(vector<T> &vector);
    private:
        void swap(vector<T> &v, int i, int j);
};

template <class T>
void Sorts<T>::swap(vector<T> &v, int i, int j) {
    T aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

template <class T>
void Sorts<T>::ordenaBurbuja(vector<T> &vector){
  for(int i = 1; i<vector.size(); i++){
    for(int j = 0; j<vector.size()-1; j++){
      if (vector[j]>vector[j+1]){
        swap(vector, j, j+1);
      }
    }
  }

}
