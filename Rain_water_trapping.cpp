#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    
    int A[N];
    for(int i=0;i<N;i++)
    cin>>A[i];
    
    int B=0;
    int total_water=0;
    
    while(B<N-1){
        int max_r,max_l;
        int r,l;
        // finding left max
        max_l=A[B];
        for(int i=B;i>=0;i--){
            
            if(max_l<A[i]){
            max_l=A[i];
            l=i;
            }
        }
        // finding right max
        max_r=A[B];
        for(int i=B;i<N;i++){
            
            if(max_r<A[i]){
            max_r=A[i];
            r=i;
            }
        }
        // calculating min of left max and right max
        int min_max=A[B];
        if(A[r]>=A[l]&&A[r]>A[B]&&A[l]>A[B])
            min_max=A[l];
        else if(A[l]>=A[r]&&A[l]>A[B]&&A[r]>A[B])
            min_max=A[r];
            
        //calculating total water_trapped
        total_water+=min_max-A[B];
        cout<<"total water "<<total_water<<" at index "<<B<<"\n";
        B++;
    }
    //cout<<total_water;
    cout<<"total water trapped is "<<total_water<<"\n";
    return 0;
}
