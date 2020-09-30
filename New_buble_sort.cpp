#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    int num_of_swap=0;
    int z,y;
    // Write Your Code Here
    for(int i=0; i<n; i++){
       int num_swap=0;
        for(int j=0; j<n-1; j++){
            if(a[j]>a[j+1]){
            swap(a[j], a[j+1]);
            num_swap++;
             }
           }
           num_of_swap=num_swap+num_of_swap;
           
    if(num_swap==0){
       break;
            }
    }
    cout << "Array is sorted in " << num_of_swap << " swaps." << "\n";
    cout << "First Element: " << a[0] << "\n";
    cout << "Last Element: " << a[n-1] << "\n";
    return 0;
}


