/* Virtual Function and Pure Virtual Function: tell compiler. that this function is
going to overriden by derived class function to ensure run time polymorphism.*/
#include<iostream>
using namespace std;
class A {
    public: virtual void fun1(){ // virtual function
cout<<"Virtual function in class A";
    }
};
class B{ //Abstract class
    public: virtual void fun2()=0; //Pure virtual function 

};
class C: public A{
    public: void fun1() override {
        cout<<"\n I am a updated  version of Class A function";
    }
};
class D: public B{
    public: void fun2() override {
        cout<<"\n I am having implementation code of class B function";
    }
};
int main(){
    C obj;
    obj.fun1();
    D obj1;
    obj1.fun2();
}


