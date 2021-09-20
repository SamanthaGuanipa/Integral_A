#include <iostream>
#include <stdlib.h>
#include<string.h>
#include <sstream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std; 

void lectura(); 


int main() {
  lectura(); 


  return 0; 

}

void lectura(){
  ifstream archivo; 

  string texto = "";

  string numero = "orden_llegada", name = "nombre", pedido = "pedido", cant = "cantidad"; 
  vector <string> numeros;
  vector <string> nombres;
  vector <string> pedidos;
  vector <string> cantidades;
  vector <string> lin;
  string numCl, nombreCl, pedidoCl, cantCl; 
  int c = 0; 
  int w = 0; 





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

      string word = "";

      //Se separa la línea por cada coma que se encuentre
      while(getline(strstr,word,',')){
        
        c++;

        if(w!=1) lin.push_back(word);

        if (w!=1 && c<=4){

          if (c==1) numCl = word; 
          if (c==2) nombreCl= word;
          if (c==3) pedidoCl= word;
          if (c==4) cantCl= word;

        }


      }


    } 


   
  }
archivo.close(); 
}