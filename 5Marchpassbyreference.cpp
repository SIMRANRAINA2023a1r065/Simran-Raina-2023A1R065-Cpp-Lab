//Method 1. Pass by reference
//Program to demonstrate working of Passing object as Parameter to function.
#include<iostream>
using namespace std;
class Program {
    public: int a;
    public: Program(int b)
{
a=b;
}
public: void Display(){
    cout<<"\n Value of a is:"<<a;
}
};
void modify(Program &obj2) {//Modify function accepts obj2 as Parameter
obj2.a=10; //Any change inside this function will not modify original value of a.
//This will create separate instance of Program class.
cout<<"\n Modified value is:  "<<obj2.a;
}
int main(){
    Program obj1(9); // Original object of class with initialization of parametrized Constructor
    obj1.Display();
    modify(obj1); // calling modify function
    obj1.Display();
}
