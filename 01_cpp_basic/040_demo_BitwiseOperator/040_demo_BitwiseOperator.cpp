#include <iostream>

using namespace std;

int main(){
    int x=11, y=7, z;
    // Operadores Bitwise
    //AND
    z=x&y;
    cout<<z<<endl;
    // OR
    // binario 11 : 00001011 -> 1 byte -> 8 bits
    // binario 7 :  00000111
    // Operation OR
    // 00001100 -> 2^3 + 2^2 = 12
    // 2^3 + 2^2 + 2^1 + 2^0 = 15
    int z1=x|y;
    cout<<z1<<endl;
    
    //XOR
    // binario 11 : 00001011 -> 1 byte -> 8 bits
    // binario 7 :  00000111
    // Operation XOR
    // 00001100 -> 2^3 + 2^2 = 12
    int z2=x^y;
    cout<<z2<<endl;

    // Shift * 2^1
    char x1=5, y1;
    y1=x1<<1; // 5 * 2^1 = 10
    cout<<(int)y1<<endl;

    // Shift / 2^1
    char x2=20, y2;
    y2=x2>>1;// 20 / 2^1 = 10
    cout<<(int)y2<<endl;

    //negation operator
    char y3;
    y3=~x1; // 5 = -6, se cambia de signo y se suma 1
    cout<<(int)y3<<endl;
    
}