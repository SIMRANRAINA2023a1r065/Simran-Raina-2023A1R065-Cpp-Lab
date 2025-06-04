/*Program: This pointer*/
#include<iostream>
using namespace std;
class A {
    private: int x; //Local Variable
    public: A(int x){ //Parametrized variable--parametrized comstructor 
    this->x = x;
    }
    public: void Display(){
        cout<<"Value of local variable is "<<this->x; //Printing value of local variable
    }
};
int main(){
    A obj(1);
    obj.Display();
    return 0;
}
