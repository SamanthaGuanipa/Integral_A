#include <iostream>
#include <stdlib.h>
#include<string>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <iomanip>
#include "sorts.h"
#include "objetos.h"
#include <queue>

using namespace std; 

//Se crea la función "lectura" para leer el archivo
void lectura(); 

//La función lectura va a recibir un vector de la clase Objeto llamado pedidos
void lectura(vector <Objetos> &pedidos){

//Se abre el archivo  
  ifstream archivo; 

  string texto = "";

  string numero = "orden_llegada", name = "nombre", pedido = "pedido", cant = "cantidad"; 

  vector <string> lin;
  int numCl; 
  int cantCL;
  string nombreCl, pedidoCl;
  int c = 0; 
  int w = 0; 
  string word;

//Se abre el archivo en modo lectura 
  archivo.open("pedidos.csv",ios::in); 
  
 //Saber si hay un error al abrir el archivo
  if(archivo.fail()){ 
   
     
     cout<<"No se pudo abrir el archivo"; 
     //Se cierra el programa
     exit(1);  

  }

  //Mientras no haya error al abrir el archivo
  while(!archivo.eof()){

  //Se lee línea por línea
    while (getline(archivo, texto)){ 
      
      w++; 

      c = 0; 
      
      stringstream strstr(texto); 

      

      //Se separa la línea por cada coma que se encuentre
      Objetos datopedido;
      
      while(getline(strstr,word,',')){
      
        if(w!=1) lin.push_back(word);

        if (w!=1 && c<=3){

          if (c==0){
            
            numCl = atoi(word.c_str());

          } 
          if (c==1){
            
            nombreCl = atoi(word.c_str()); 

          } 
          if (c==2){

            pedidoCl= word;

          } 

          if (c==3) {

            cantCL= atoi(word.c_str());
            
          }
          c++;
          
        }

      }
      datopedido.crear(numCl, cantCL,nombreCl, pedidoCl);

      pedidos.push_back(datopedido);
    } 
  }
  //Se cierra el archivo
archivo.close(); 
}

//Se crea la funcion que escribira en el archivo
void escribirArchivo(vector <Objetos> &orden){
  ofstream lista_ord("archivo_ord.csv");
  lista_ord << "pedido,cantidad" << endl;
  for(int i = 1; i < orden.size(); i++){
    lista_ord <<orden[i].getPedido()<<","<<orden[i].getCantidad()<<endl; 
  }
  //se cierra la lista
lista_ord.close();
}


//Se inicializa el main 
int main() {



  int opc; 
  vector <int> numerosLlegada;
  vector <int> numerosCant;
  vector <string> nombres;
  vector <string> pedidos;
  vector <string> cantidades;
  vector <Objetos> VectorPedidos;

//Se realiza la funcion lectura con el vector "VectorPedidos".
  lectura(VectorPedidos); 

  Sorts <int> a;
  Sorts<Objetos> b; 


  /*Se hace la funcion ordenaBurbuja al VectorPedidos con el objeto b.
  se realiza entonces un ordenamiento*/ 
  b.ordenaBurbuja(VectorPedidos); 
  
  //Se crea un queue de tipo Objetos
  queue<Objetos> llegada; 
 

 do
    {
        system("cls");
        cout<<"Bienvenido estimado chef."<<endl<<
        "----------------------"<<endl;
        cout<<"1. Recibir lista completa y ordenada de pedidos del día"<<endl;
        cout<<"2. Recibir los pedidos ordenados uno por uno"<<endl;
        cout<<"3. Actualizar la lista ordenada en un nuevo archivo"<<endl;
        cout<<"4. Salir"<<endl; 
        cout<<endl<<"Elija una opcion: ";
        cin>>opc;


        switch(opc)
        {
        case 1:
        {
           
           for(int i = 1; i < VectorPedidos.size(); i++){
             cout << VectorPedidos[i].getCantidad()<<" "<<VectorPedidos[i].getPedido()<< endl;
             }
            break;

        }
        case 2:
        { 
             for(int i = 1; i<VectorPedidos.size(); i++)
             {
               llegada.push(VectorPedidos[i]);
             }
               int opp; 
               cout<<llegada.front().getPedido()<<" "<<llegada.front().getCantidad()<<endl; 
               cout<<"¿Desea recibir el siguiente pedido?";
               cout<<"1. Si. 2. No.";
               cin>>opp; 

               while(opp==1)
               {

                  llegada.pop();
                  cout<<llegada.front().getPedido()<<" "<<llegada.front().getCantidad()<<endl;
                  cout<<"¿Desea recibir el siguiente pedido?";
                  cout<<"1. Si. 2. No.";
                  cin>>opp;

               } 
           
            break;
        }
        case 3:
        {
          escribirArchivo(VectorPedidos); 
  
          
          break;
        }
        
        case 5:
        {
            break;
        }
        default:
        {
            cout<<"Elija una opcion valida"<<endl;
        }
        }
    }
    while(opc != 5);
    return 0;
}




