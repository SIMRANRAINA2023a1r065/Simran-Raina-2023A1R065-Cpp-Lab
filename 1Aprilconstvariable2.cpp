// /* Mutable and  immutable(Read only) form of Data.
//  Example 1: Constnt variable*/

// #include<iostream>
// using namespace std;
// class program 
// {
//     public: const int a=1; // constant variable
//     void display(){
//         cout<<"value of a:"<<a; // Member function can access constant member of class
//         // a=2; // This will rise error, we cannot modify constant variable
//     }
// };
// int main(){
// program obj;
// obj.display();
// }
//

// Example 2: Constant variable
// #include<iostream>
// class program {
//     using namespace std;
//     public : int b; // local variable
//     public: program (const int a) // constant variable in constructor
//     {
//         b=a; // Passing value of constant variable to local variable
//     } 
//     void display(){
//         cout<<"value of a is:"<<b;// Member function can access constant member of class 
//         //a=3; // This will raise an error, we cannot modify constant variable
//     }
// };
// int main(){
// program obj; // passing value to constant variable 
// obj.display();
// }
/* Wrie a program to :
a. create a constant variable  a initialize with value 5,
b. create a local variable b initialize with value 6
c. create a constant function Modify() and
increment value of a and b by 2 inside function definition.
d. create a member function Update() and increment value of a and b by inside this function defination.
Write your observation in detail using comments.*/
#include<iostream>
using namespace std;
class Program {
    public: const int a=5; // constant variable
    int b=6; //local variable
    void Update(){
        b=b+2;
        cout<<"\n Updated value of b is:"<<b;
    }
};
void modify(Program &obj){ 
   //obj.a=obj.a+2;
   obj.b=obj.b+2;
   cout<<" Modified Value of b is:"<<obj.b;
}

int main(){
    Program obj;
    modify(obj);
    obj.Update();
}