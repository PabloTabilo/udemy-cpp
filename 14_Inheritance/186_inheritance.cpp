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
        Rectangle(int l = 1, int r = 1){this->l = l; this->r = r;}
        int getLength(){return l;}
        int getBreadth(){return r;}
        void setLength(int l){this->l = (l>0?l:0);}
        void setBreadth(int r){this->r = (r>0?r:0);}
        int area(){return l*r;}
        int perimeter(){return 2*(l+r);}
        bool isSquare(){return l == r;}
        ~Rectangle();
};
Rectangle::~Rectangle(){cout<<"Destroy Rectangle object"<<endl;}

class Cuboid:public Rectangle {
    private:
        int h;
    public:
        Cuboid(int h = 0){this->h = h;}
        int getHeight(){return h;}
        void setHeight(int h){this->h = (h>0?h:0);}
        int volume(){return h*getLength()*getBreadth();}
};

int main(){
    Cuboid c(5);
    c.setLength(4);
    c.setBreadth(3);
    cout<<c.volume()<<endl;
    return 0;
}