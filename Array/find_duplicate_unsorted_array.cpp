#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no. of elements in an array(n): ";
    cin>>n;
    int A[n];
    cout<<" Array emelemts -> "<<endl;
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" element: ";
        cin>>A[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (A[i]==A[j]){
                cout<<A[i]<<endl ;
            }
        }
    }

    return 0;
}


