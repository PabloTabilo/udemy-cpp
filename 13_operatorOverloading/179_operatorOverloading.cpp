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
		int real, img;
	public:
		Complex(int real = 0, int img = 0){
			this->real = real;
			this->img = img;
		}
		int getReal(){return this->real;}
		int getImg(){return this->img;}
		Complex operator+(Complex x){
			return Complex(this->real + x.getReal(), this->img + x.getImg());
		}
};

int main(){
	Complex c1(3,7);
	Complex c2(5,4);
	Complex c3(0,0);
	c3 = c1 + c2; // Operator overloading !!
	cout<<c3.getReal()<<endl;
	cout<<c3.getImg()<<endl;
	return 0;
}