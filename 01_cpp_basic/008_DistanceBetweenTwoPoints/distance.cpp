#include <cmath>
#include <iostream>
using namespace std;

double euclidean(double x1, double y1, double x2, double y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

main(){
    double x1, x2, y1, y2;
    cout<<"Usuario, necesito que me des los dos puntos"<<endl;
    cout<<"X1Y1: ";
    cin>>x1,y1;
    cout<<""<<endl;
    cout<<"X2Y2: ";
    cin>>x2,y2;
    cout<<""<<endl;

    double res = euclidean(x1, y1, x2, y2);
    cout<<"La distacia es: "<<res<<endl;
}