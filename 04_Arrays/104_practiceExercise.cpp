#include <iostream>
using namespace std;

float giveAvg(float arr[], int n){
    float sumar=0.0;
    for(int i=0;i<n;i++){
        sumar += arr[i];
    }
    return sumar/n;
}

void fillArr(float arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<"Dame el valor para la posicion "<<i<<": ";
        cin>>arr[i];
    }
}

void printArr(float arr[], int n){
    for(int i = 0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int n;
    float A[100]={}, avg_;

    cout<<"User, give a size of array: ";
    cin>>n;
    cout<<endl;
    fillArr(A, n);
    avg_ = giveAvg(A, n);
    cout<<"La media de los valores es: "<<avg_<<endl;
    cout<<"Los valores del array que entrego user son: "<<endl;
    printArr(A, n);

}