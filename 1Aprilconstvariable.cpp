/* Mutable and  immutable(Read only) form of Data.
 Example 1: Constnt variable*/

#include<iostream>
using namespace std;
class program 
{
    public: const int a=1; // constant variable
    void display(){
        cout<<"value of a:"<<a; // Member function can access constant member of class
        // a=2; // This will rise error, we cannot modify constant variable
    }
};
int main(){
program obj;
obj.display();
}