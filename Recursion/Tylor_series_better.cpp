//tylor's series using horner's rule 
// e^4 = 1+ x/1 [ 1+x/2 [ 1+x/3 [ 1+x/4 ] ] ]
#include <iostream>
using namespace std;
double e(int x , int n){
    static double s ; // to store the result 
    if (n==0){
        return s;
    }
    s=1+x*s/n;
    return e(x,n-1);
}

int main(){
    cout<<e(7,100);
    return 0;
}