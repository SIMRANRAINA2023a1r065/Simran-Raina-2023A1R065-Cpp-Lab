//program to demonstrate working of function with no return type and no parameter using OOP : C++
// OOPS features are required: namespace,class,object,Access Specifiers, member variables and member functions
#include<iostream>
using namespace std;//std is a predefined namespace
class Program{ // program is user defined class name
//int main() // by using procedural programming
   // {
   //std::cout<<"Hi!";
   //return 0;
   // }
   // by default access Specifier = Public
   public: void Message1()
   {
    cout<<"Hi!";
   }
   public: void Message2()
   {
    cout<<"Simran!";
   }
};
   int main(){
    Program obj; // creating object
    obj.Message1(); // function calling
    obj.Message2();
    return 0;
   }


