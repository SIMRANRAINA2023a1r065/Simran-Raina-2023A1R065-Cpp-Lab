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
void modify(Program &obj2) {//Modify function accepts obj2 as Parameter and '&' here is a reference to the obj2 new updated value i.e;10
obj2.a=10; //Any change inside this function will not modify original value of a.
//This will create separate instance of Program class.
cout<<"\n Modified value is:  "<<obj2.a;
}
int main(){
    Program obj1(9); // Original object of class with initialization of parametrized Constructor->a=9;
    obj1.Display();
    modify(obj1); // calling modify function
    obj1.Display(); // change made in formal parameter made change in actual parameter as well i.e; value of 'a' after modification is a=10
}
