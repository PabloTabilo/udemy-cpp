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

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 10, y = 20;
    swap(x, y);
    cout<<x<<", "<<y<<endl;
    swap2(x, y);
    cout<<x<<", "<<y<<endl;
    return 0;
}