#include <iostream>

using namespace std ; 

int fin(int n){
    int t0 = 0 , t1=1, s=0;
    if(n<=1) return n;

    for(int i=2 ; i<=n ; i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

int main(){
    cout<<fin(12);
    return 0;
}