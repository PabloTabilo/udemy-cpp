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
    string s = "MADAM";
    int n = s.size();
    int l = n/2;
    int i = 0;
    int j = n-1;
    bool p = true;
    while(i<l && p){
        if(s[i] != s[j])
            p = false;
        i++;
        j--;
    }
    if(p)
        cout<<"Palindrome";
    else
        cout<<"NOT palindrome";
    cout<<endl;
    return 0;
}