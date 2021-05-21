#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char *s;
    char s1[20] = "Good";
    char s2[10] = "Morning";
    // String Function
    cout<<"Examples (s1, s2) = ("<<s1<<","<<s2<<")"<<endl;
    // strlen(s1): Size s1
    cout<<"size string s1: "<<strlen(s1)<<endl;
    // strncat(destination, src, length) : Concat two strings, only first 3 letters of s2
    strncat(s1, s2, 3);
    cout<<"Concat 3 letters from s2 to s1: "<<s1<<endl;
    // strcpy(destination, src, length): String copy
    char s3[10] = "";
    strcpy(s3,s2);
    cout<<"Copy s2 in s3 empty string: "<<s3<<endl;

    return 0;
}
