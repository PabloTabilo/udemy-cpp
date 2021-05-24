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

void display(){
    cout<<"Hello"<<endl;
}

float add(float x, float y){
    float z;
    z = x + y;
    return z;
}

int maxim(int a, int b, int c){
    if(a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else return c;
}

int main(){
    display();
    float x = 2.3, y = 7.9, z;
    z = add(x, y);
    cout<<z<<endl;
    int a = 10, b = 15, c = 5;
    cout<<maxim(a, b, c)<<endl;
    return 0;
}