#include <iostream>
using namespace std ; 
void fun(int *n){
    fun(n-1);
    cout<<n;
    
}

int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    int n ;
    cin>>n;
    fun(&n);

    return 0;
}