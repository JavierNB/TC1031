#include "recursive.h"
#include <iostream>

int main()
{
    //printOut(123);
    //cout << bad(5) << endl;
    //cout << fibonacci(5) << endl;
    for(int i=0; i <= 5; i++){
        //cout << f(i) << endl;
        //cout << bad(i) << endl;
        //cout << factorial_iter(i) << endl;
        //cout << factorial(i) << endl;
        //cout << fibonacci(i) << endl;
        cout << "2^"<< i << ": " << expt(2,i) << endl;
        //printOut(i);
        //cout << endl;
    }
    //triangularesHastaFila(8);
    cout << endl;
}