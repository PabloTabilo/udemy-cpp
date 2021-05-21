#include <iostream>
using namespace std;

int main(){
    // run command: g++ -o program.exe program.cpp
    int x = 10;
    int &y = x; // Al declarar una referencia debes inicializarlas
    int a;
    a = x; // r-value: x me da el dato
    x = 25; // l-value: x me da la direccion donde 25 tiene que ser almacenado
    cout<<"x = "<<x<<" y ="<<y<<" a = "<<a<<endl;
    return 0;
}
