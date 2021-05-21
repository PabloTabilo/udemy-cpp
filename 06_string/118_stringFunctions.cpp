#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char *s;
    char s1[20] = "Good";
    char s2[10] = "Morning";
    // String Function
    cout<<"Examples (s1, s2) = ("<<s1<<","<<s2<<")"<<endl;
    // strlen(s1): Size s1
    cout<<"size string s1: "<<strlen(s1)<<endl;
    // strncat(destination, src, length) : Concat two strings, only first 3 letters of s2
    strncat(s1, s2, 3);
    cout<<"Concat 3 letters from s2 to s1: "<<s1<<endl;
    // strcpy(destination, src, length): String copy
    char s3[10] = "";
    strcpy(s3,s2);
    cout<<"Copy s2 in s3 empty string: "<<s3<<endl;
    // Substring
    // strstr(): Verifica que un string sea substring de otro string, si lo es
    // entonces, nos entrega el string desde que encuentra el patron, en otro caso, 
    // devuelve un tipo NULL
    // error: ISO C++ forbids converting a string constant to 'char' [-Wpedantic]
    // Este error nos dice que el error estandar ISO prohibe asignar una cadena literal a un char *
    // el lenguaje dicta que las cadenas literales no se pueden modificar, entonces
    // debes colocar el "const"  
    const char *s_p = "Programming";
    const char *s_p2 = "gram";
    cout<<strstr(s_p,s_p2)<<endl;
    cout<<strstr(s_p,"m")<<endl;
    if(strstr(s_p,"k")!=NULL)
        cout<<strstr(s_p,"k")<<endl;
    else
        cout<<"Not Found"<<endl;
    // strchr(main, char): Encuentra el char e imprime todo el texto desde el char encontrado,
    // en otro caso, devuelve tipo NULL
    // strrchr(main, char): Encuentra el char e imprime el char
    cout<<strchr(s_p, 'g')<<endl;  
    cout<<strrchr(s_p, 'r')<<endl;
    // Compare Strings
    // strcmp(str1, str2): return -ve, 0 or +ve
    // El retorno esta determinado por los valores ASCII, diferencia entre values
    cout<<" -- Compare Strings --"<<endl;
    char str_1[20] = "Hello";
    char str_2[20] = "Hello";
    cout<<strcmp(str_1, str_2)<<endl;
    char str_3[20] = "hello";
    cout<<strcmp(str_3, str_2)<<endl;
    char str_4[20] = "HellO";
    cout<<strcmp(str_4, str_2)<<endl;
    char str_5[20] = "minor";
    char str_6[20] = "elder";
    cout<<strcmp(str_5, str_6)<<endl;

    return 0;
}
