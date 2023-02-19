// this is not a preferred method because here a funtion will make mutiple calls for the same value which is also called excessive recurssion 

#include <iostream>
using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-2)+fib(n-1);
}

int main(){
    cout<<fib(10);
}

// time complexity of this will be O(n^2)
//to avoid this and make it efficient we use memoization approach 