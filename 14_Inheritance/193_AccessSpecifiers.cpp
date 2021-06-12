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

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        void setLength(int l){length=l;}
        void setBreadth(int b){breadth=b;}
        int getLength(){return length;}
        int getBreadth(){return breadth;}
        int area(){return length*breadth;}
        int perimeter(){return 2*(length+breadth);}
};

int main(){
    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(5);
    cout<<r1.area()<<endl;

    return 0;
}