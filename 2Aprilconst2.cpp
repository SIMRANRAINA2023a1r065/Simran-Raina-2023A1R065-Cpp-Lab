/* Program to demonstrate the use of constant variable, costant function
constant object in a program*/
#include<iostream>
using namespace std;
class Program 
{
public: const int a =1; //constant variable
int b=2;
public: void fun1() const { //constant function
 cout<<"Value of a and b is:"<<a<<"\t" <<b;
 a++; //This will raise error as constant function cannot modify constant variable 
 b++; //variable or normal variable
 // constant function will not modify value of any variable inside its function
 //defination
}
public: void fun2() { //normal function
 cout<<"value of a and b is:"<<a<<"\t"<<b;
 a++; //this will raise error as we cannot modify value of constant variable
 // after its initialization
 b++;
}
};
int main(){
const Program obj1; //constant object of class, can call only constant memeber of class
obj1.fun1();
obj1.fun2(); // This will raise error as constant object cannot call normal object
Program obj2; //normal object of class
obj2.fun1(); // can call both constant and normal member of class
obj2.fun2();
return 0;
}