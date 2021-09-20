# Programa que ordena pedidos utilizando los datos de cada cliente

Este programa utiliza el archivo "pedidos.csv". 
Este archivo contiene el nombre del cliente, el número (orden de llegada), qué alimento pidió, y la cantidad de este pedido (por ejemplo, 2 ordenes de tacos).
El programa podrá ordenar (de manera ascendente) los pedidos, dependiendo de su orden de llegada, orden alfabético o la cantidad de pedidos que realizó.  

# SICT0302B: Toma decisiones
**Selecciona un algoritmo de ordenamiento adecuado al problema**

En este entregable se ordena únicamente el número de llegada del cliente.

Para este problema se utilizó un algoritmo de tipo bubble sort, para poder organizar los datos del archivo de forma ascendente. 
Usé bubble sort porque es rápido en la mayoría de los casos. Además, se utilizó porque su complejidad espacial es constante. 

**Análisis de complejidad temporal**

La complejidad del algoritmo es de O(n^2). Se compone de dos ciclos for (anidados) que recorren el arreglo para seleccionar el valor mayor, llevándolo al final las veces necesarias.
