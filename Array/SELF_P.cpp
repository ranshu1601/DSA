#include <iostream>
using namespace std;

class Array{
    private:
    //defining all the elements in class these are in private 
        int *A;
        int size;
        int length;
        void swap(int *x, int *y);
    public:
        Array(){
            size=10;
            length=0;
            A=new int[size];
        }

        Array(int snz){
            size=snz;
            length=0;
            A=new int[size];
        }

        ~Array(){
            delete []A;
        }

        void Display();
        void Append(int x);
        void Insert(int index, int x);
        int Max();
        int Min();


};

void Array::Display(){
    cout<<"\nElements are \n";
    for(int i=0; i<length;i++)
        cout<<A[i]<<" ";
}

void Array::Append(int x){
    if(length<size)
        A[length++]=x;
}

void Array::Insert(int index , int x){
    if(index>=0 && index <=length){
        for(int i=length;i>index;i--)
            A[index]=x;
             length++;
    }
}

int Array::Max(){
    int max=A[0];
    for(int i=1;i<length;i++){
        if(A[i]>max)
            max=A[i];
    }
    return max;
}

int Array::Min(){
    int min=A[0];
    for(int i=1 ; i<length;i++){
        if(A[i]<min)
        min=A[i];
    }
    return min;
    
}