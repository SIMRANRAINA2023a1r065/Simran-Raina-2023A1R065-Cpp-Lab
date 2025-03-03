#include<iostream>
//iostream have defination of all pre define input and output functions used in this i.e; Cin and Cout 
// program.
using namespace std;
// 'using'is a keyword 
//namespace:- collection of predefine classes.
//std: name of the predefine namespace here; it is predefined but it can be user defined as well
//class is a keyword(predefined word, already defined in library) used to define a class
//program is a user defined name.
//for user defined name, we use some naming conventions i.e; not starting with special characters,digits,etc.
class Program//4
{
    // in this block all the statements are enclosed inside the bracket
    //public: //access specifier
    public : void display()//function definition//6// function with no return type and no parameter(first type of function)
    {//7
    cout<<"Hello World!"; //8// //Cout is used to display message on screen but the message must be enclosed in double quotes " "
    // ; is terminator or end of statement and at the end of this class program there would be semicolon after closed parenthesis
    } //9
    public: void fun()
    {
        cout<<"Hi!";
    }
};//10
int main() //1 // main function is firstly executed in a program by the compilor as its scope or block of code defines that from where code starts and where it ends
{//2
Program obj; //3 // syntax of object is : class name object name;
obj.fun(); //5 //function calling syntax: object name . function name(); , where '.' is Access method to retrieve the name
obj.display();//execution is done according to calling of function
return 0; //11
}     //12 