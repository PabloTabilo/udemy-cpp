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
    string str = "hello";
    cout<<str<<endl;
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;
    cout<<str.capacity()<<endl;
    str.resize(50); // Change the capacity of the array
    cout<<str.capacity()<<endl;
    cout<<str.max_size()<<endl; // size max of string, max num of characters
    //string str1 = nullptr;
    //cout<<str1.length()<<endl;
    string str1 = "";
    if(str1.empty())
        cout<<"String is Empty"<<endl;
    return 0;
}