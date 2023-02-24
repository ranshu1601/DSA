#include <iostream>
using namespace std;


//     int func( int n){
//     static int x=0; // static variable in recursion 
//     if(n>0){
//         x++ ; 
//         return func(n-1)+x;
//     }
//     return 0;

// }

int x = 0; // global variable in recursion
int func (int n)
{
if(n>0)
{
x++;
return func(n-1)+ x ;
}
return 0;
}
int main()
{
int a = 5;
cout<<func(a);
}

// int main(){
//     int a=5;
//     cout<<func(a);
//     return 0;
// }


