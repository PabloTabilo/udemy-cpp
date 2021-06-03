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

int searchVal(int A[], int n, int k){
    if(n<0)
        return -1;
    if(A[n-1] == k)
        return n-1;
    else
        return searchVal(A, n-1, k);
}

int main(){
    int A[5] = {1, 4, 5, 10, 44};
    cout<<searchVal(A, 5, 10)<<endl;
    return 0;
}