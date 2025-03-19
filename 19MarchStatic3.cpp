/* Declarating static variable inside function and inside class
Imp point: static variable declared inside the class and initialized outside the  class*/
#include<iostream>
using namespace std;
class UserCount {
    public: static int count; //static variable inside class //static variable declared
    void counter() { // function lene se user increase hote hai but constructor lene se users same rehte hai
        count++;
    }
void display(){
    cout<<"Users are:"<<count<<endl;
}
};
int UserCount::count=0; // initialized outside the class
int main(){ // using syntax datatype class name scope resolution operator and
    UserCount user1; // static variable name
    user1.counter();
    user1.display();
    user1.counter();
    user1.display();
return 0;
}
