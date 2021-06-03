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

int giveMax(int a = 0, int b = 0, int c = 0){
    return a > b && a > c ? a : (b > c ? b : c);
}

int main(){
    cout<<giveMax()<<endl;
    cout<<giveMax(10)<<endl;
    cout<<giveMax(10,13)<<endl;
    cout<<giveMax(10,13,15)<<endl;
    return 0;
}