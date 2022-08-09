#include <iostream>

using namespace std;

template <typename t>
void imprimir(t txt){
    cout << txt << endl;
}

int main(){
    imprimir(true);
    imprimir(0.3);
    imprimir("Hi!");
}