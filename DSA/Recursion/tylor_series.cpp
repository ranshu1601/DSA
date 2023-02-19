#include <iostream>
using namespace std;

//time complexity of this solution is O(n^2) 
double e(int x , int n ){
    static double p=1 , f=1;
    double r ;
    if(n==0){
        return 1;
    }
    else{
        r = e(x,n-1);
        p=p*x;
        f=f*n;
        return (r+p/f);
    }

}

int main(){
    cout<<e(7,100); // x is the power of e and n is the number of terms till we want to find 
    return 0;
}