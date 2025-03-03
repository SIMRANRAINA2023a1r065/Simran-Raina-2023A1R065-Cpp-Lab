//Program to demonstrate Array Declaration and Array Initialization using Direct Method
#include<iostream>
using namespace std;
class ArrayProgram {
    private: int a[5];//Array Declaration
int b[5]={ 1,2,3,4,5};//Direct Initialization of Multiple Array elements at Declaration point
    public : void Display(){
        a[0]=10;//Initialization of Array Element at index 0 using Direct Method
        a[1]=5;//Initialization of Array Element at index 1 using Direct Method
        cout<<"\n Array Element at index 0 is:"<<a[0];
        cout<<"\n Array Element at index 1 is:"<<a[1];
        cout<<"\n Array Element at index 2 is:"<<a[2];//it gives a garbage value by itself in c++ if value not given at the particular index
        cout<<"\n Enter Array Element:";
        cin>>a[2];
        cout<<"\n Array Element enetered by user at index 2:"<<a[2];//for updation purpose only
        cout<<"\n Array Element of array b at index 2 is:"<<b[2];
        
    }
};
int main() {
 ArrayProgram obj;
 obj.Display();
 return 0;
}