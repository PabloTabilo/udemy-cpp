#include <iostream>

using namespace std;

main(){
    int x = 5, y;
    cout<<"X = 5, e Y solo esta declarada"<<endl;
    y = ++x;
    cout<<"\nPre Increment"<<endl;
    cout<<"El valor de y es: "<<y<<endl;
    cout<<"El valor de x es "<<x<<endl;
    x = 5;
    y = x++;
    cout<<"\nPost Increment"<<endl;
    cout<<"El valor de y es: "<<y<<endl;
    cout<<"El valor de x es "<<x<<endl;
    
    int z;
    y = 10;
    x = 5;
    z = ++x * y;
    cout<<"\nZ esta declarado, y = 10, x = 5"<<endl;
    cout<<"Formula: Z = ++x * y"<<endl;
    cout<<"El valor de Z es: "<<z<<"; Valor de X: "<<x<<"; Valor de y: "<<y<<endl;

    y = 10;
    x = 5;
    z = x++ * y;
    cout<<"\nZ esta declarado, y = 10, x = 5"<<endl;
    cout<<"Formula: Z = x++ * y"<<endl;
    cout<<"El valor de Z es: "<<z<<"; Valor de X: "<<x<<"; Valor de y: "<<y<<endl;

}