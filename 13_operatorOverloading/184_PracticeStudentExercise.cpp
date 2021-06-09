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

/*
Write a class for rational number (p / q) with overloading + and << operator
*/

class Rational{
    private:
        int p, q;
    public:
        Rational(int p = 0, int q = 0){
            this->p = p;
            this->q = q;
        }
        friend Rational operator+(Rational r1, Rational r2);
        friend ostream & operator<<(ostream &o, Rational r1);
};

Rational operator+(Rational r1, Rational r2){
    return Rational(r1.p*r2.q + r2.p*r1.q, r1.q * r2.q);
}

ostream & operator<<(ostream &o, Rational r1){
    o<<r1.p<<"/"<<r1.q;
    return o;
}

int main(){
    Rational r1(1,2);
    Rational r2(1,8);
    Rational r3(0,0);
    r3 = r1 + r2;
    cout<<r3<<endl;
    return 0;
}