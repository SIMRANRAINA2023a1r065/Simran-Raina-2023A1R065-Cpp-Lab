/* Inheritance and constructor , destructor
In inheritance constructor follows top to bottom approach , first base class constructor
will called and then child class constructor.
Destructor follows Bottom Up Approach , first child class constructor called and then parent class*/
#include<iostream>
using namespace std;
class Parent 
{
   public: Parent(){ //Base class constructor
 cout<<"Parent class constructor";
    }
    public: ~ Parent() //Base class destructor 
    {
        cout<<"\n Parent class Destructor !";
    }
    void fun1(){ //Base class function
cout<<"\n Parent class function";
    }
};
class child : public Parent // child class extending parent class
{
    public: child()     //Derived class Constructor
    {
        cout<<"\n Child class constructor !";
    }
    public: ~child() //Derived class 1 Destructor
    {
        cout<<"\n child class destructor";
    }
void  fun2(){ // Derived class 1 function
      cout<<"\n Child class Function";
}
};
class grand_child : public child // grand child class extending child class ( To implement multi level)
{
    public: grand_child(){
        cout<<"\n Grand child class function";
    }
    void fun3(){ //dericed class 1 function
        cout<<"\n Grand child class function";
    }
    public: ~ grand_child() //Derived class 2 constructor
    {
        cout<<"\n Grand child class destructor";
    }
};
int main(){
    grand_child obj;
    obj.fun1();
    obj.fun2();
    obj.fun3();
}