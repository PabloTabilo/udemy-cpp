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
        int l, r;
    public:
        Rectangle(int l = 0, int r = 0){
            setL(l);
            setR(r);
        }
        Rectangle(Rectangle &rect){
            l = rect.getL();
            r = rect.getR();
        }
        int area(){return l*r;}
        int perimeter();
        void setL(int l){this->l = (l>0?l:0);}
        void setR(int r){this->r = (r>0?r:0);}
        int getL(){return l;}
        int getR(){return r;}
        bool isSquare();
        ~Rectangle(); // clear object or deallocation
};

int Rectangle::perimeter(){
    return 2 * (l+r);
}

bool Rectangle::isSquare(){
    return l == r;
}

Rectangle::~Rectangle(){
    cout<<"Rectangle is destroyed"<<endl;
}

int main(){
    Rectangle r1(10,5); // create on stack
    Rectangle r3(3,3);
    Rectangle r2(r1);
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    cout<<r3.isSquare()<<endl;
    cout<<r1.isSquare()<<endl;

    Rectangle* p = new Rectangle(); // pointer heap
    return 0;
}