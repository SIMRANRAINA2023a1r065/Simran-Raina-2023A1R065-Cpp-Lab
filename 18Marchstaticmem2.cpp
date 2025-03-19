/* Wrie a program to create a class with name UserCount and a function count(),
this function will count total number of users of class.
Imp point: Staic variables can be declared inside a class and initialized outside the class  */
#include<iostream>
using namespace std;
class UserCount {
    public: static int c;
     //::-> scope resolution operstor
    public:  UserCount()
    {
        c++;
    }
};
int UserCount::c=0;//::-> scope resolution operator
int main(){
   UserCount obj1,obj2,obj3;
   cout<<"Total number of users are:"<<UserCount::c;
}