#include<iostream>
using namespace std;
int main(){
	int N=6;
    int A[N]={1,3,4,2,7,8};
    cout<<"Hello guys , This is wave sort"<<"\n";
    for(int i=0;i<N;i=i+2){

    	if(i>0 && A[i]<A[i-1]){
    		int s=A[i];
    		A[i]=A[i-1];
    		A[i-1]=s;
    	}
    	if(i<=N-2 && A[i]<A[i+1]){
    		int s=A[i];
    		A[i]=A[i+1];
    		A[i+1]=s;
    	}
    }

    for(int i=0;i<N;i++)
    	cout<<A[i]<<" ";

    cout<<"\n";

    return 0;
} 
 