#include<iostream>
using namespace std;
#define R 3
#define C 3
int Query(int B[R][C],int tli,int tlj,int bri,int brj){
int sum=0;
for(int i=tli;i<=bri;i++)
    for(int j=tlj;j<=brj;j++)
    sum+=B[i][j];
    return sum;
}
int main(){
    int A[R][C]={1,2,3,4,5,6,7,8,9};
    cout<<"sum of sub matrix with given querries is "<<Query(A,0,0,2,2)<<endl;
    return 0;
}