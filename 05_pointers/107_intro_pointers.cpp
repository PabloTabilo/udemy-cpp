#include <iostream>
using namespace std;

int main(){
    // run cpp file: g++ -o program program.cpp
    // Pointers
    int x = 10;
    // Declaracion puntero
    int *p;
    // Puntero es igual a la direccion de x en memoria, Inicializacion
    p = &x;

    cout<<x<<endl; // 10
    cout<<&x<<endl; // direccion de memoria x
    cout<<p<<endl; // direccion de memoria x
    cout<<&p<<endl; // direccion de memoria puntero
    cout<<*p<<endl; // Valor almacenado en la variable x: 10
}
