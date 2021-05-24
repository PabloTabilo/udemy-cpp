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
    string s = " how Many wOrds ";
    int w=0, v=0, c=0;
    bool vow = false;
    bool findLetter = false;
    char vs[5] = {'a', 'e', 'i', 'o', 'u'};
    string::iterator it = s.begin();
    for(;it!=s.end(); it++){
        char c_val = *it;
        if (c_val != ' '){
            if (!findLetter)
                w++;
            findLetter = true;
            for(int i = 0; i<5;i++){
                if(c_val == vs[i] || c_val == vs[i]-32){
                    v++;
                    vow = true;
                    break;
                }
            }
            if (!vow)
                c++;
            vow = false;
        }else
            findLetter=false;
    }
    cout<<s<<endl;
    cout<<v<<endl;
    cout<<c<<endl;
    cout<<w<<endl;
    return 0;
}