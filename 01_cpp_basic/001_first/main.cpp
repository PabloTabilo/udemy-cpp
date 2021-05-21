// compile c++ with : g++ main.cpp -o first_main.exe 
// This create a file .exe that windows can execute

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]){
    int a, b, c;
    cout<<"enter 2 numbers";
    cin>>a>>b;
    c = a + b;

    cout<<"La suma es: "<<c<<endl;

    string str;
    cout<<"May i know your name ";
    getline(cin, str);

    cout<<"Hola "<<str<<endl;

    cout<<"Hi, el programa termina here\n";
    return 0;
}