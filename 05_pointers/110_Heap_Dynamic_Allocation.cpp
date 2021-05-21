#include <iostream>
using namespace std;

int main(){
    // g++ -o program.exe program.cpp
    // input del user para el size del array
    int size;
    cout<<"Enter number of elements";
    cin>>size;
    // Si le doy un size de 20, el sizeof seria de 80. 80 bytes, es decir, 4 bytes por elemento
    // int A[size];
    // cout<<sizeof A<<endl;
    // Memory leake
    // Si creas un array con puntero, recuerda eliminar el espacio de memoria heap
    // si no quedara hasta que termine el programa
    int *p = new int[20]; // aqui estas creado un array en heap
    delete []p; // aca borraste el array que esta en heap
    // p = nullptr; // Borraste que el puntero siga apuntando a el espacio del array borrado
    // entonces, ahora apunta a nulo, nada
    // Si no haces esta operacion, generas un "Deallocation Memory"
    // Buena practica:
    // delete []p;
    // p = nullptr; 
    p = new int[40]; // Se borro el array anterior, y se creo uno nuevo en la misma direccion de memoria
    return 0;
}
