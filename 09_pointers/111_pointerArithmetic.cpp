#include <iostream>
using namespace std;

void printArr(int A[], int n){
    for(int i = 0; i < n; i++){
    	cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int A[5] = {2,4,6,8,10}; // se crea un array en memoria
    int n = sizeof(A)/sizeof(A[0]);
    printArr(A, n);
    int *p = A; // El puntero esta apuntando al array
    // p -> A - A[0]
    cout<<"-- Aritmética sobre el mismo puntero --"<<endl;
    cout<<" ---- Cambiando posicion en memoria ---- "<<endl;
    cout<<"Puntero p en A[0] = "<<*p<<endl;
    // el puntero conoce el array A, y ahora apunta al primer elemento de este
    p++; // apunta al siguiente valor;
    cout<<"Puntero p+1 en A[1] = "<<*p<<endl;
    p = p+3; // apunta a la posicion 3 + la actual del puntero
    cout<<"Puntero p+1+3 en A[4] = "<<*p<<endl;
    cout<<"-- Aritmética entre punteros --"<<endl;
    int *q = &A[3];
    cout<<"Puntero q en A[3] = "<<*q<<endl;
    int d = q - p; // 3: distancia entre A[0] y A[3]
    cout<<"q: "<<q<<" - p:"<<p<<endl;
    cout<<"q-p: "<<q-p<<" or int d: "<<d<<endl;
}
