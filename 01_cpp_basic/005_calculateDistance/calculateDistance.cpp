#include <cmath>
#include <iostream>

using namespace std;

// Escribe una expresion para calcular la distancia
// usa los siguientes parametros
// u - velocidad inicial
// v - velocidad final
// a - aceleracion

double distance(double u, double v, double a){
    double distance = ((v*v) - (u*u))/(2*a);
    return distance;
}

int main(){
    double v, u, a;
    cout<<"\nHola Usuario, si quieres calcular la distancia me tienes que dar: "<<endl;
    cout<<"El valor de la velocidad final: ";
    cin>>v;
    cout<<"\nEl valor de la velocidad inicial: ";
    cin>>u;
    cout<<"\nEl valor de la aceleracion: ";
    cin>>a;

    double res = distance(u, v, a);

    cout<<"\nLa distancia segun los parametros recibidos es: "<<res;
    
    return 0;
}