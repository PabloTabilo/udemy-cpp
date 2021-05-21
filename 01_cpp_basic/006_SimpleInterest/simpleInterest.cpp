#include <cmath>
#include <iostream>

using namespace std;
/*
Calculemos una expresion para la tasa de interes simple
R - rate of interest
P - Principle amount - Monto inicial
T - time - tiempo
SI?
*/

double simpleInterest(int R, int P, int T){
    return (R*P*T)/100;
}

main(){
    int R, P, T;
    cout<<"Hola usuario dame los siguientes valores para calcular la tasa: "<<endl;
    cout<<"Monto Principal: ";
    cin>>P;
    cout<<""<<endl;
    cout<<"Tasa de interes: ";
    cin>>R;
    cout<<""<<endl;
    cout<<"Tiempo: ";
    cin>>T;
    cout<<""<<endl;
    
    double SI = simpleInterest(R, P, T);

    cout<<"Tu interes simple es: "<<SI<<endl;
}