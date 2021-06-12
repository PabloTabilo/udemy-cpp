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

class Base{
    public:
        Base(){cout<<"Non-param Base"<<endl;}
        Base(int x){cout<<"Param of Base "<<x<<endl;}
};

class Derived:public Base{
    public:
        Derived(){cout<<"Non-param Derived"<<endl;}
        Derived(int y){cout<<"Param of derived "<<y<<endl;}
        Derived(int x, int y):Base(x){
            cout<<"Param of derived "<<y<<endl;
        }
};

int main(){
    Derived d;
    Derived d1(10);
    Derived d2(5, 10);
    return 0;
}