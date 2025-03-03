 /* program to demonstrate working of Constructor */ // Example of default Constructor (with no parameter and no default values)
 #include<iostream>
 using namespace std;
 class Program // class with name Program
 {
    public: Program() //class Constructor 
    {
        cout<<"Constructor Called!";
    }
 };
 int main()
 {
    Program obj; //class object creating
    return 0;
 }