#include <iostream>

using namespace std;

double volumeCylinder(double r, double h){
    return r*r*h*3.14;
}

main(){
    double r, h;
    cout<<"Usuario necesito que me des dos parametros"<<endl;
    cout<<"RADIO: ";
    cin>>r;
    cout<<""<<endl;
    cout<<"ALTURA: ";
    cin>>h;
    cout<<""<<endl;

    double res = volumeCylinder(r, h);
    cout<<"Tu cilindro tiene volumen: "<<res;
}