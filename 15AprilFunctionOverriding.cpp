/*  Function Overriding: Updation Base class function in derived class
Basic Program*/

#include<iostream>
using namespace std;


class Base{
    public: Base(){
        cout<<"\n Base Class Constructor!";
    }
    public: ~Base(){
        cout<<"\n Bae class Destructor !";
    }
    virtual void Fun1(){ // we are declaring base class function as virtual to instruct
        // compiler to override this function at run time
        cout<<"\n Base class Function";

    }
};
class Derived : public Base{
    public: Derived (){
        cout<<"\n Derived Class Constructor !";
    }
    public: ~Derived(){
        cout<<"\n Derived class Desstructor ! ";
    }
    void fun1(){
        cout<<"\n Derived class function";
    }
};
int main(){
    Derived obj;
    obj.Fun1();
    return 0;
}

