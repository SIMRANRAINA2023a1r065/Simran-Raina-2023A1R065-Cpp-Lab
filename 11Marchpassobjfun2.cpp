/* Program to demonstrate working of passing object as Paraneter to function
using different methods
1. Pass by value
2. Pass by Reference
3. Pass by pointer
4. Pass by const Reference-> generates read only copy , does no changes in original value after updation of the value */
#include<iostream>
using namespace std;
class Program {
    public: int a=1;//original value of a
   public: void Display(){
    cout<<"\n Value of a in class:"<<a;
   }
};
//Pass by value
void method1(Program obj1)// Pass by value( Creates a seperate copy of a does not affect the opriginal value of a)
{
    obj1.a=2; //any change inside this function will not modify original value
    cout<<"\n Value of a in Method 1(Pass by value):"<<obj1.a;
}
//Pass by reference
void method2(Program &obj){
    obj.a=3;
    cout<<"\n Value of a in method 2 (Pass by reference):"<<obj.a;
}
void method3(Program *pobj){
    pobj->a=4; //Pointer will change original value
    cout<<"\n value of a in method 3 is:"<<pobj->a;
}
void method4(const Program obj2){
    //obj.a=5; //This will generate error ( we can only read data but not modify)
    cout<<"\n Value of a in method 4 is"<<obj2.a;
}
int main(){
    Program obj;
    obj.Display();
    method1(obj);
    obj.Display();
    method2(obj);
    obj.Display();
    method3(&obj);//& obj-> for getting value of obj
    obj.Display();
    method4(obj);
    obj.Display();
    return 0;
}
