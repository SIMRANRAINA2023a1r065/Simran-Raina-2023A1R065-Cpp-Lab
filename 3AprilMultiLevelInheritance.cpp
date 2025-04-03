/* Multi Level Inheritance:
a.create a base class with name MyApp 
b. create a function Message() , display welcome message on screen
c. create a function  Login() to accept pin from user and validate pin against pin against value 123
and return Message 'yes' or 'No'
d. create a derived class with name studentInfo
e. create a function accept() store student information like name, Registration Number, course name  but only when user login successfully.
f. Display all student information in display() */
#include<iostream>
using namespace std;
class Parent {
    public: void fun1(){
    cout<<"Parent class called!";
}
};
class child: public Parent {
 public: void fun2(){
    cout<<"\n Child function called !";
 }
};
class Grandchild : public child{
    public:void fun3(){
        cout<<"\n Grand child function called !";
    }
};
int main(){
    Grandchild obj;
    obj.fun1();
   obj.fun2();
   obj.fun3();
}
