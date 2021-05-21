#include <iostream>
using namespace std;

int sumfirstn(int n){
    return  (int)(n*(n+1)*0.5);  
}

int main(){
    int number;
    cout<<"Usuario, por favor, ingresa un numero para contarlo"<<endl;
    cin>>number;

    int sum_num = sumfirstn(number);

    cout<<"La suma de la serie es: "<<sum_num<<" para el valor n = "<<number<<endl;
}