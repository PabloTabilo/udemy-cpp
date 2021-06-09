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

class Complex{
	private:
		int real;
		int img;
	public:
		Complex(int r = 0, int i = 0){
			real = r;
			img = i;
		}
        friend ostream & operator<<(ostream &o, Complex &c1);
	    void display(){cout<<real<<"+i"<<img;}
		friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2){
	Complex t;
	t.real = c1.real + c2.real; // puedo acceder a miembros privados
	t.img = c1.img + c2.img;
	return t;
}

ostream & operator<<(ostream &o, Complex &c1){
	o<<c1.real<<"+i"<<c1.img;
	return o;
}

int main(){
    Complex c1(10,12);
	Complex c2(22,2);
	Complex c3(0,0);
	c3 = c1 + c2; // operator+(c1, c2);
    //c3.display();
    cout<<c3<<endl;
    return 0;
}