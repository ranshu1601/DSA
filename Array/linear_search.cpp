#include <iostream>
using namespace std ;


int linearsearch(int a[],int n, int key){
    for(int i=0 ; i<n;i++){
        if(key == a[i])
        return i;
    }
    return -1;
}

int main(){
    int n , key;
    cout<<" enter the length of array: ";
    cin>>n;
    int a[n];
    for(int i ; i<n ; i++){
        cout<<"enter array elements: ";
        cin>>a[i];
    }
    cout<<"enter the key to find: ";
    cin>>key;


    cout<< linearsearch(a, n,key);
}