#include <iostream>
#include <stdlib.h>
#include<string.h>
#include <sstream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <filesystem>
#include "sorts.h"

using namespace std; 

void lectura(); 

void lectura(vector <int> &numeros){
  ifstream archivo; 

  string texto = "";

  string numero = "orden_llegada", name = "nombre", pedido = "pedido", cant = "cantidad"; 
  vector <string> lin;
  int numCl; 
  string nombreCl, pedidoCl, cantCl; 
  int c = 0; 
  int w = 0; 
  string word;





  archivo.open("pedidos.csv",ios::in); //Se abre el archivo en modo lectura 
  
  if(archivo.fail()){ //Saber si hay un error al abrir el archivo
     
     cout<<"No se pudo abrir el archivo"; 
     exit(1); //Se cierra el programa 

  }

  //Mientras no haya error al abrir el archivo
  while(!archivo.eof()){

  //Se lee línea por línea
    while (getline(archivo, texto)){ 
      
      w++; 

      c = 0; 
      
      stringstream strstr(texto); 

      

      //Se separa la línea por cada coma que se encuentre
      while(getline(strstr,word,',')){
        
        //c++;
        
        
      

        if(w!=1) lin.push_back(word);

        if (w!=1 && c<=3){

          if (c==0){
            
            numCl = stoi(word);
            numeros.push_back(numCl);

          }  
          if (c==2){

            pedidoCl= word;
            

          } 

          if (c==3) {

            cantCl= word;
          }
          c++;
          
        }
        


      }


    } 


   
  }
archivo.close(); 
}


int main() {
  vector <int> numeros;
  vector <string> nombres;
  vector <string> pedidos;
  vector <string> cantidades;
  lectura(numeros); 
  Sorts <int> a; 
  a.ordenaBurbuja(numeros); 
  for(int i = 0; i < numeros.size(); i++){
  cout << numeros[i] << endl;
  }

  return 0; 

}

