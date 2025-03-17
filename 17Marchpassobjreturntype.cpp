// Method 1: Return as value
// Program to demonstrate working of returning object from function
#include<iostream>
using namespace std;
class Program {
    public: int a; // class member variable
Program(int b) // Parametrized Constructor of class
{
    a=b; // initializing value: member variables in Parametrized constructor  
}
void display(){
    cout<<"Value of a is:"<<a; 
}
};
Program fun() //function with return type as class i'e; Program // This function will return object as value 
{
Program obj1(10); // creating object , identification of parametrized constructor made
return obj1; // returning object
}
int main(){
    Program obj2= fun(); // creating object for calling  fn and calling fn from class obj1 as when this fn is called it will return a object to store its return value, we use class object
    obj2.display();
    return 0;
}