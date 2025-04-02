// /* Inheritance : Important feature of OOPS*/
// //Program of Single Level Inheritance
// #include<iostream>
// using namespace std;
// class MyApp //Parent class
// {
//     public: void Message() {
//         cout<<"Welcome to My Application !";
//     }
// };
// class Login : public MyApp //child class (syntax: class child  name sign of inheritance: public base)
// {
//     private: int pin1 =123, pin2;
//     public: void Accept(){
//         cout<<"\n Enter your pin: ";
//         cin>>pin2;
//         if(pin1==pin2){
//           cout<<"\n Login Successful !";
//         }
//         else{
//             cout<<"\n Login Fail !";
//         }
//     }
// };
// int main(){
//  Login obj;
//  obj.Message();
//  obj.Accept();
// }
/* Inheritance : Important feature of OOPS*/
//Program of Single Level Inheritance

/* Write a program to 
a.create a base class with name MyApp 
b. create a function Message() , display welcome message on screen
c. create a function  Login() to accept pin from user and validate pin against pin against value 123
and return Message 'yes' or 'No'
d. create a derived class with name studentInfo
e. create a function accept() store student information like name, Registration Number, course name  but only when user login successfully. */

#include<iostream>
using namespace std;
class MyApp //Parent class
{
    public: void Message() {
        cout<<"Welcome to My Application !";
    }
    public: int pin2,pin1=123; 
    public: string Login(){
        cout<<"\n Enter your pin: ";
        cin>>pin2;
        if(pin1==pin2){
          cout<<"\n Login Successful !";
          return "yes";
        }
        else{
            cout<<"\n Login Fail !";
            return "no";
        }
    }
    
};
 class StudentInfo: public MyApp{
    public: string name,regNo,cname;
    public: void Accept(){
        cout<<"\n Enter your name and registration number and course name:";
        cin>>name>>regNo>>cname;
    }
    public: void display(){
        cout<<"\n Name of student:"<<name;
        cout<<"\n Registration number of student:"<<regNo;
        cout<<"\n Course name of student is:"<<cname;
    }
 
};

int main(){
StudentInfo obj;
obj.Message();
string res;
res= obj.Login();
if(res=="yes"){
    obj.Accept();
    obj.display();
}
//obj.Accept();
//obj.display();
}