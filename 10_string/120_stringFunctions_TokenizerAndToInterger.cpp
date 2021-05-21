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
    // strtol(str1) : string to long int
    char s1[10] = "12344";
    int32 x = strtol(s1, NULL, 10);
    // strtof(str1, NULL) : string to float
    char s2[10] = "54.78";
    float y = strtof(s2, NULL);
    cout<<x+10<<" "<<y-4<<endl;
    // strtok(str1,"sep"): string to tokenizer
    char s3[20] = "x=10;y=20;z=35";
    char *token = strtok(s3, "=;");
    while(token != NULL){
        cout<<token<<endl;
        token = strtok(NULL,"=;");
    }
    return 0;
}