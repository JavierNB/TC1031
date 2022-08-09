#include "Arreglo.h"
#include <bits/stdc++.h>
#include <iostream>

int main(){
    Arreglo miArreglo;
    int dato;

    miArreglo.leer("numeros.txt");
    cout << "Los números leídos son: ";
    miArreglo.imprimir();
    dato = miArreglo.borrar();
    cout << "El elemento borrado es " << dato << endl;
    cout << "El nuevo arreglo es: ";
    miArreglo.imprimir();


    // Templates: mecanismos de C++ para promover reuso de
    // código haciendo las clases y funciones más genéricas.
    
    // Es lo que permite que la función swap funcione para todo
    //  tipo de objetos, aun los de clases que acabas de definir.
    
    /*Arreglo miArreglo2;
    swap(miArreglo, miArreglo2);
    cout << "Despues de swap, el arreglo 2 es: ";
    miArreglo2.imprimir();

    // También permite crear vectores de lo que quieras:
    vector<int> v;
    vector<string> vv;
    vector<Arreglo> w;*/
}