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

int g = 5;
void fun(){
    int a = 10;
    int g = 20;
    a++;
    g+=a;
    cout<<"a: "<<a<<endl;
    cout<<"g (nearest scope) : "<<g<<endl;
}

int main(){
    cout<<"g: "<<g<<endl;
    fun();
    cout<<"g: "<<g<<endl;
    return 0;
}