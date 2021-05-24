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


int main(){
    string str = "Programming";
    cout<<str.substr(3)<<endl;
    cout<<str.substr(3,4)<<endl;
    string str1 = "Hello";
    string str2 = "World";
    cout<<str1.compare(str2)<<endl;

    string str3 = "Holiday";
    cout<<str3.at(4)<<endl;
    cout<<str3[4]<<endl;
    str3[4] = 'M';
    cout<<str3<<endl;

    str1 = str1 + '_' +str2;
    cout<<str1<<endl;
    return 0;
}