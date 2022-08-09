//////////////////////////////////////
// Implementación de una plantilla  //
// Estructura de Datos              //
// Escenario: Usar una función max  //
// para int, double, float          //
//////////////////////////////////////
#include <iostream>
using namespace std;

// Sin plantilla
/*
int max(int nX, int nY){
    return (nX > nY) ? nX : nY;
}

double max(double dX, double dY){
    return (dX > dY) ? dX : dY;
}

float max(float dX, float dY){
    return (dX > dY) ? dX : dY;
}
*/
// Estrategia con plantilla:
// Crear función especificando cuáles de los parámetros o variables
// queremos que sean de tipos que dependan de las variables de invocación

// El compilador se encargará de crear una instancia
// de la función con los tipos apropiados según sean necesarios

// template y typename son palabras reservadas
// Se puede usar cualquier nombre para el indicador de tipo
// Nombres comunes Type, T
// Debes usar el mismo nombre  en la declaracion de parametros y dentro de la funcion
template <typename Type>
Type maximo(Type dX, Type dY){
    return (dX > dY) ? dX : dY;
    /* Equivalente a:
    if(dX > dY){
        return dX;
    } else{
        return dY;
    }
*/
}

template <typename Type2>
Type2 minimo(Type2 dX, Type2 dY){
    return (dX < dY) ? dX : dY;
}
/*Actividad: crear plantilla para imprimir cualquier valor usando plantilla*/
int main(){
    int a,b,c;
    double x,y,z;
    
    a = 1;
    b = 2;
    c = maximo(a, b);
    cout << c << endl;
    
    x = 1.2;
    y = 2.6;
    z = maximo(x, y);

    cout << z << endl;
}