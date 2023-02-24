#include <iostream>
using namespace std;
//head recusrion 
void fun(int n ){
    if(n>0){
        fun(n-1);
        cout<<n;
    }
}

//tail recursion 
void func(int n ){
    if(n>0){
        cout<<n;
        func(n-1);
    }
}

int main(){
    int x=3;
    fun(x);
    func(x);
    return 0 ;
}