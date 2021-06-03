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

int* fun(){
    int* p = new int[5];
    for(int i = 0; i < 5; i++){
        p[i] = 5 + i;
    }
    return p;
}

int& fun_ref(int &x){
    return x;
}

int main(){
    int* ptr = fun();
    for(int i=0;i<5;i++){
        cout<<ptr[i];
    }
    cout<<endl;
    int a = 2000;
    fun_ref(a) = 100000;
    cout<<a<<endl;
    return 0;
}