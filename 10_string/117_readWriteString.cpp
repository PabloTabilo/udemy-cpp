#include<iostream>
using namespace std;

int main(){
    char s[20];
    cout<<"Enter your name: ";
    cin>>s;
    cout<<"Welcome "<<s<<endl;
    // cin.get() : Una vez
    // cin.getline() : todas las veces que lo solicite
    // Para solucionar cin.get() se usa cin.ignore()
    // ya que, cin.get() se queda con el ultimo character
    // el cual es un salto de linea, entonces, cualquier otro metodo
    // que se llame con cin.get(), incorporara un salto de linea (o enter)
    // pero con ignore, sacamos el ultimo char
    char s1[100];
    cout<<"Enter your name complete"<<endl;
    cin.getline(s1, 100);
    cout<<"Welcome "<<s2<<endl;
    return 0;
}
