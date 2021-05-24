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
    // Copy
    string s = "Welcome";
    char str[10];
    s.copy(str, s.size());
    cout<<str<<endl;
    char str1[10];
    s.copy(str1, 3);
    cout<<str1<<endl;
    str1[3] = '\0';
    cout<<str1<<endl;
    // Find
    string str2 = "How are you?";
    cout<<str2.find("yo")<<endl;
    cout<<str2.find('o')<<endl;
    cout<<str2.find("is")<<endl; // fuera del rango de string
    cout<<str2.rfind('o')<<endl;
    string str3 = "Hello World";
    cout<<str3.find_first_of('l')<<endl;
    cout<<str3.find_first_of("le")<<endl;
    cout<<str3.find_first_of('l',6)<<endl;
    cout<<str3.find_last_of('l')<<endl;
    return 0;
}