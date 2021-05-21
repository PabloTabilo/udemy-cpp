#include <iostream>
using namespace std;

void area(){
    int b, h;

    cout<<"Programa para calcular el area de un triangulo"<<endl;

    cout<<"Dame el primer numero entero: ";
    cin>>b;

    cout<<"Dame el 2do numero entero: ";
    cin>>h;

    float area;

    area = (float)(b*h*0.5);

    cout<<"The area of a triangle is: "<<area;
}

int main(){
    area();
}