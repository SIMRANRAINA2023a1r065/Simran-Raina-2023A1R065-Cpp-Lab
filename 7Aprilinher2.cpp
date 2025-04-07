/* Example: Multiple Inheritance*/
#include<iostream>
using namespace std;
class Parent1 {
    public: Parent1(){
    cout<<"\n Parent 1 class constructor";
}
public: void fun1(){
    cout<<"\n Parent 1 class function";
}
};
class Parent2
{
    public: Parent2(){
        cout<<"\n Parent 2 class constructor";
    }
    public: void fun2(){
        cout<<"\n Parent 2 class function";
    }
};
class child: public Parent2, Parent1 //Jo parent class jis sequence mai likenge uss sequence m constructor call hoga
{
    public: child(){
    cout<<"\n Child class constructor ";
    }
    public: void fun3(){
        cout<<"\n child class function";
    }
};
int main(){
child obj;
}
