#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<iterator>
#include<stack>
#include<set>
#include<unordered_map>
#include<math.h>
#include<limits>
#include<iomanip>
#include<sstream>

#define MEM(a, b) memset(a, (b), sizeof(a))

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int ll;
typedef unsigned long long int uint64;
typedef long double ld80;

using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}


int main(){
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

    // Check if exists
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