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
    string str = "today";
    string::iterator it;
    for(it = str.begin();it!=str.end();it++)
        *it = *it - 32;
    cout<<endl;
    cout<<str<<endl;
    string::reverse_iterator it1;
    string str1 = "today";
    for(it1 = str1.rbegin();it1!=str1.rend();it1++)
        cout<<*it1;
    for(int i = 0; str[i] != '\0'; i++)
        cout<<str[i]<<endl;
    return 0;
}