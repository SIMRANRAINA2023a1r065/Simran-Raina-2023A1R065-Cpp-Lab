/* In hybrid inheritance, 
when we access parent class function from child class object due to multiple path,
compiler raise a error known as Ambigious Function Error
or
Diamond Problem.
To solve this error, we have 2 different methods:
1.Scope Resolution Operator ::
2. Virtual Inheritance */
#include<iostream>
using namespace std;
class Parent {
    public: void fun1(){
        cout<<"Parent class function !";
    }
};
class child1: virtual public Parent {
    public: void fun2(){
        cout<<"\n Child1 class function";
    }
};
class child2: virtual public Parent {
    public: void fun3(){
        cout<<"\n child2 class Function";
    }
};
class child3: public child1, public child2{
public: void fun4(){
    cout<<"\n child3 class function";
}
};
int main(){
    child3 obj;
    obj.fun1(); // This will raise error, ambigious function Error (Diamond Problem)
    obj.fun2();
    obj.fun3();
    obj.fun4();
}
