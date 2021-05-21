#include <cmath>
#include <iostream>

using namespace std;

float find_root(float a, float b, float c){
    float root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    float root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
    return root1, root2;
}

int main(){
    float a, b, c;
    cout<<"Usuario dame a, b, c para buscar las raices cuadradas"<<endl;
    cout<<"Dame a: ";
    cin>>a;
    cout<<"\nDame b: ";
    cin>>b;
    cout<<"\nDame c: ";
    cin>>c;

    float r1, r2 = find_root(a, b, c);

    cout<<"Los resultados de las root son: "<<r1<<" "<<r2<<endl;
}