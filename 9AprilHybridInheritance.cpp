/* 5. Hybrid Inheritance 
combining 2 or more than 2 different types of inheritance to form hybrid  inheritance.
In some situation, when we r trying to access base class function with derived  
class in hybrid inheritance , compiler raise error that function is ambigious in nature 
as more than 1 path exists in the code to reach base class function and compiler
confused to select the path and raise this ambiguity error.
To solve this error we use scope resolution operator or virtual inheritance. */
#include<iostream>
using namespace std;
class Parent{
    public: Parent(){
        cout<<"\n Parent class Constructor";
    }
    public: ~Parent(){
        cout<<"\n Parent class Destructor";
    }
    public: void fun1(){
        cout<<"\n Parent class function";
    }
};
class child1 : public Parent {
 public: child1(){
    cout<<"\n child1 class Constructor";
 }
 public: ~child1(){
    cout<<"\n child1 class Destructor";
 }
 public: void fun2(){
    cout<<"\n child1 class function";
 }
};
class child2: public  Parent {
    public: child2(){
        cout<<"\n child2 class constructor";
    }
    public: ~child2(){
        cout<<"\n child2 class Destructor";
    }
    public: void fun3(){
        cout<<"\n child2 class function";
    }
};
class child3 : public child1, public child2{
    public: child3(){
        cout<<"\n child3 class Constructor";
    }
    public: ~child3(){
        cout<<"\n child3 class Destructor";
    }
    public: void fun4(){
        cout<<"\n child 3 class function";
    }
};
int main(){
    child3 obj;
    //obj.fun1(); -> This will raise ambigious function error, to resolve this error to access
    // we use scope resolution with class name via which we want
    //Parent class function
    obj.child1::fun1(); // or
    obj.child2::fun1();
    obj.fun2();
    obj.fun3();
    obj.fun4();
}
