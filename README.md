# Programa que ordena pedidos utilizando los datos de cada cliente
El programa es para el uso del chef, este puede ver la lista de los pedidos general, o una por una y actualizar su lista ya ordenada en un csv para el calculo de sus cuentas al final del día.
Este programa utiliza el archivo "pedidos.csv". 
Este archivo contiene el nombre del cliente, el número (orden de llegada), qué alimento pidió, y la cantidad de este pedido (por ejemplo, 2 ordenes de tacos).
El programa podrá ordenar (de manera ascendente) los pedidos, dependiendo de la cantidad de la orden. 

# SICT0302B: Toma decisiones

**Selecciona un algoritmo de ordenamiento adecuado al problema**

En este entregable se ordena únicamente la cantidad de la orden del cliente. El algoritmo ordenaBurbuja se compone de dos ciclos for (anidados) que recorren el arreglo para seleccionar el valor mayor, llevándolo al final cada vez Realizará un proceso de revisión diversas veces, dependiendo del arreglo. La complejidad del algoritmo es de O(n^2) para el peor de los casos. Se utilizó porque es rápido en la mayoría de los casos. 

**Selecciona y usa una estructura lineal adecuada al problema**

Se seleccionó la estructura lineal queue, ya que así como va llegando el pedido, lo irá asignando uno por uno al chef a manera que sea más visual para el mismo,al culminar un pedido, se hara un pop() para saltar al siguiente pedido. Irá preguntandole al usuario si desea ver el siguiente pedido, de no ser así, volverá al menú inicial. La complejidad temporal de la cola es O(n) ya que irá recorriendo cada elemento de la cola.

#SICT0303B - Implementa acciones científicas

**Implementa mecanismos para consultar información de las estructuras correctos**

Se utilizaron los siguientes mecanismos para consultar información:
queue: La función llegada.front().getPedido()<<" "<<llegada.front().getCantidad() permite consultar los elementos almacenados en el vector llegada uno por uno. 
sorts.h: la función ordenaBurbuja() irá ordenando los datos almacenados en el archivo .csv por la cantidad por medio de la consulta de los datos. 

**Implementa mecanismos de lectura de archivos correctos**
Se leyó el archivo pedidos.csv por medio de la librería fstream para realizar el sort y el queue, además se escribió la lista ya ordenada en un nuevo archivo .csv.

#SICT0301B - Evalúa los componentes

**Hace un análisis de complejidad correcto y completo para todo el programa y sus componentes**

ordenaBurbuja: El algoritmo ordenaBurbuja se compone de dos ciclos for (anidados) que recorren el arreglo para seleccionar el valor mayor, llevándolo al final cada vez Realizará un proceso de revisión diversas veces, dependiendo del arreglo. La complejidad del algoritmo es de O(n^2) para el peor de los casos. Se utilizó porque es rápido en la mayoría de los casos. 

llegada.front().getPedido()<<" "<<llegada.front().getCantidad(): se desarrolló un queue la complejidad temporal de la cola es O(n) ya que irá recorriendo cada elemento de la cola hasta llegar al final.







