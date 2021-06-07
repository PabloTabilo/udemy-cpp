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

/*
Write a class for student with:
1. Roll
2. Name
3. marks in 3 subject

Functions for
- total marks
- Grade
- required methods
*/

class Student{
    private:
        static int roll;
        string name;
        int M[3];
    public:
        Student(string name, int M[3]){
            this->roll++;
            this->name = name;
            this->M[0] = M[0];
            this->M[1] = M[1];
            this->M[2] = M[2];
        }
        double totalMarks();
        double Grade();
        void setName(string name){this->name = name;}
        string getName() {return this->name;}
        int getRoll(){return this->roll;}
        void setMark(int m, int p);
        int * getMark();
        ~Student();
};
int Student::roll = 0;
double Student::totalMarks(){
    return M[0] + M[1] + M[2];
}
double Student::Grade(){
    return totalMarks()/3;
}
void Student::setMark(int m,int p){
    if(p < 3 && p >= 0)
        M[p] = m;
    else
        cout<<"Need to be valid positions for change"<<endl;
}
int * Student::getMark(){
    cout<<"Marks: "<<endl;
    cout<<M[0]<<" "<<M[1]<<" "<<M[2]<<endl;
    return M;
}

Student::~Student(){
    cout<<"Destroy Student!"<<endl;
}

int main(){
    int M[3] = {10, 6, 8};
    Student s("pablo", M);
    cout<<s.totalMarks()<<endl;
    cout<<s.Grade()<<endl;
    s.getMark();
    cout<<"Roll: "<<s.getRoll()<<endl;
    int M1[3] = {1, 2, 3};
    Student s1("Cristian", M1);
    cout<<s1.totalMarks()<<endl;
    cout<<s1.Grade()<<endl;
    s1.getMark();
    cout<<"Roll: "<<s1.getRoll()<<endl;
    return 0;
}