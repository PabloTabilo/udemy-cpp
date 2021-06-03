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

template<class T>
T maxim(T a, T b){
    return a>b?a:b;
}

int main(){
    cout<<maxim(12,14)<<endl;
    cout<<maxim(2.3,1.4)<<endl;
    cout<<maxim(12.1f,0.14f)<<endl;
    cout<<maxim('a','c')<<endl;
    return 0;
}