#include<iostream>
using namespace std;

int main(){
    // g++ -o program.exe program.cpp
    // Declaring and Initialising String
    char x = 'A';
    // Todo guardado en STACK
    char s[10] = "hello"; // h e l l o \0 _ _ _ _
    // \0 : string delimiter, o null character
    cout<<"s[10] = "<<s<<endl;
    char s1[] = "HeLlO";
    cout<<"s1[] = "<<s1<<endl;
    char s2[] = {'H', 'e', 'l', 'l', 'o', '\0', 'p', 'p'};
    cout<<"s2[] = {...} = "<<s2<<endl;
    char s3[] = {65, 66, 67, 68, '\0'}; //ASCII code
    cout<<"s3[] = {ASCII code}"<<s3<<endl;
    // Guardado en Heap
    char *s4 = "Hello"; // Usando un puntero
    cout<<"Apuntando 1er char - *s4 = "<<*s4<<" s4 - array de chars: "<<s4<<endl;
    // Usando clase string
    string s5 = "Hellow";
    cout<<"string class s5 = "<<s5<<endl;
    cout<<"all ok"<<endl;
    return 0;
}
