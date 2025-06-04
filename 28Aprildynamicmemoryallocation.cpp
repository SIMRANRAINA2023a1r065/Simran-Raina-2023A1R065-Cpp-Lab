// /*Program: Dynamic Memory Allocation using new and delete*/
// #include<iostream>
// using namespace std;
// class Student{
// public: int marks; string Sname;
// void Display(){
//     cout<<"\nName= "<<Sname;
//     cout<<"\nMarks are "<<marks;
// }
// };
// int main(){
//     Student *obj=new Student(); 
//     //Syntax: class name pointer to object name= new class name();
//     //Ensure to allocate memory to object at runtime;
//     obj->marks=555;
//     obj->Sname="user1"; //acccessing and allocating value to members of class using pointer
//     obj->Display();
//     delete obj; //deleting object to ensures that the memory of object will deallocate
//                 // after program execution
//     obj->Display();
//     return 0;
// }
/*Create a class Book with data member book name and price
Create an object dynamically and display its data and deallocates its memory.*/
#include<iostream>
using namespace std;
class Book{
    public: string Bname; int Price;
    public: void Display(){
        cout<<"\nName= "<<Bname;
        cout<<"\nPrice are "<<Price;
    }
};
int main()
    {
        Book *obj= new Book();
        obj->Price=550;
        obj->Bname="Morris Mano"; 
        obj->Display();
        delete obj;
        obj->Display();
    }