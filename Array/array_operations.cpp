#include <iostream>
using namespace std;
 
class Array{
 
private:
    int* A;
    int size;
    int length;
 
public:
    Array(int size){
        this->size = size;
        A = new int [size];
    }
 
    void create(){
        cout << "Enter number of elements: " << flush;
        cin >> length;
        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < length; i++){
            cout << "Array element: " << i << " = " << flush;
            cin >> A[i];
        }
    }

    void append(){
        int x;
        cout<<"enter the number you want to append: ";
        cin>>x;
        A[length] = x ; 
        length++;
        for(int i=0 ; i<length ; i++){
            cout<<A[i]<<" ";
        }
        
    }
 
    void display(){
        for (int i = 0; i < length; i++){
            cout << A[i] << " "<<endl;
        }
    }

    void insert(int index , int x){
        int i;
        if (index>=0 && index <= length){
            for(i=length;i<index ;i--){
                A[i]=A[i-1];
                A[index]=x;
                length++;
            }
            cout<<A[i]<<" "<<endl;


        }
    }
 
    ~Array(){
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};

int main() {
 
 
    Array arr(10);
    arr.create();
    arr.display();
    arr.append();
    arr.insert(4, 9);
 
 
    return 0;
}