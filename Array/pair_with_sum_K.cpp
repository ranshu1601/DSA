#include<iostream>
using namespace std;

// complexity is O(n^2)

int main(){
    int n;
    cout<<"enter the number of array elements(n): "; cin>>n;

    int A[n];
    cout<<"Give Array input -> ";
    for(int i=0 ; i<n ; i++){
        cout<<"enter "<<i<<" element: ";
        cin>>A[i];
    }

    int k;
    cout<<"enter the sum: "; cin>>k;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(A[i]+A[j]==k) cout<<A[i]<<" "<<A[j]<<endl;
        }
    }

    return 0;
}