#include <iostream>
using namespace std;

//sum using recursion 
int sum(int n ){
    if(n==0)
       return 0 ;
    return sum(n-1)+n;
}
//sum using interation 
int Isum(int n){
    int s=0, i;
    for(i=1;i<=n;i++)
       s=s+i;
    return s ; 
}

int main(){
    int r=sum(5);
    cout<<r;
    return 0 ;
}