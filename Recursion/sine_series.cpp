#include <iostream>

using namespace std;
// negative values of sine in not covered here 
// this funtion will be used to find the value of factorial 

int factorial(double n){
    if(n==0 ){
        return 1;
    }
    else if(n==1){
        return 1;
    }

    else {
        return factorial(n-1)*n ;
    }
}

// this funtion will be used to find the value of power of that term

double power(double a , int b){ 
    //m^n 
    if(b==0){
        return 1;
    }
    if(b%2==0){
        return power(a*a,b/2);
    }
    else{
        return a*power(a*a,(b-1)/2);
    }
}

double sine(double x, double n)
{
    if (x == 0 || n == 0)
        return 0;   //to end the recursion when number of iterations are finished
    else
        return -1*power(-1,n)*power(x,2*n-1)/factorial(2*n-1) + sine(x, n - 1);
}
//  `-1*pow(-1,n)` returns a negative term for even value of n, and postive term for odd value of n as required. You dont need separate if-else for that

int main(){
    double x ; 
    int n ; 
    cout<<"enter the angle: ";
    cin>>x;
    cout<<"enter the no. of terms: " ; 
    cin>>n;
    cout<<sine(x*3.14159/180,n);
    return 0;
}