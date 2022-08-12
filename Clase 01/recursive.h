#include <iostream>

using namespace std;

long fibonacci(int n){
    if( n==0 || n==1 )
        return 1; // caso base
    else
        return fibonacci(n-1)+fibonacci(n-2); // caso recursivo
}

int f(int x){
    if(x == 0){ // Base case
        return 0;
    } else{
        return 2*f(x - 1) + x * x;
    }
}

int bad(int n){
    if(n==0)
        return 0;
    else
        return bad(n / 3 + 1) + n - 1;
}

unsigned int factorial_iter(unsigned int n){
    int f = 1;
    for(int i = 2; i <= n; i++) f*=i;
    return f;
}

unsigned int factorial(unsigned int n){
    if(n <= 1) return 1; // caso base
    return n * factorial(n - 1); // caso recursivo
}

unsigned int expt(int base, int power){
    if (power == 0)
        return 1;
    else
        return base * expt(base, power - 1);
}

void printDigit(int n){//0 y 9
    cout << n;
}

void printOut( int n ) // Print nonnegative n 
{
    if( n>=10)
        printOut( n / 10 ); // caso recursivo
    printDigit( n % 10 ); //caso base
}

int trianguloPascal(int r, int c){
    if(c==1 or c==r)
        return 1; // caso base
    else
        return trianguloPascal(r - 1, c - 1) + trianguloPascal(r - 1, c);
}

void triangularesHastaFila(int n){
    for(int r = 1; r <= n; r++){
        for(int c = 1; c <= r; c++){
            std::cout << trianguloPascal(r, c) << "\t";
        }
        std::cout << std::endl;
    }
}
