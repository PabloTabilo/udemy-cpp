#include <iostream>
using namespace std;

void fillArray(int MT[10][10], int row_n, int col_m){
    for(int i = 0; i<row_n; i++){
        for(int j=0; j<col_m; j++){
            cout<<"dame el valor ("<<i<<","<<j<<"):";
            cin>>MT[i][j];
            cout<<endl;
        }
    }
}

void MultiplyMatrix(int A[][10], int row_a, int col_a, int B[][10], int col_b, int MT[][10]){
    int k;
    for(int i = 0; i<row_a;i++){
        for(int j = 0; j<col_b;j++){
            k = 0;
            while(k < col_a){
                MT[i][j] += A[i][k]*B[k][j];
                k++;
            }
        }
    }
}

void printArr(int arr[10][10], int r, int c){
    for(int i = 0; i<r; i++){
        for(int j = 0; j< c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int A[10][10] = {}, B[10][10] = {}, M[10][10] = {}, r1, c1, r2, c2;

    cout<<"Enter rows and columns: "<<endl;
    cout<<"# rows (1): ";
    cin>>r1;
    cout<<"# cols (1): ";
    cin>>c1;
    cout<<"Enter rows and columns to other matrix: "<<endl;
    cout<<"# rows (2): ";
    cin>>r2;
    cout<<"# cols (2): ";
    cin>>c2;
    cout<<"Fill Arrays (1): "<<endl;
    fillArray(A, r1, c1);
    cout<<"Fill Arrays (2): "<<endl;
    fillArray(B, r2, c2);
    cout<<"PRINT Arrays (1): "<<endl;
    printArr(A, r1, c1);
    cout<<"PRINT Arrays (1): "<<endl;
    printArr(B, r2, c2);

    cout<<"PRINT A X B : "<<endl;
    MultiplyMatrix(A, r1, c1, B, c2, M);
    printArr(M, r1, c2);
}