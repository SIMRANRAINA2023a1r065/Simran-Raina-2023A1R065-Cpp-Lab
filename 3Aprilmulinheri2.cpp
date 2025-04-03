/* Multi Level Inheritance:
a.create a base class with name MyApp 
b. create a function Message() , display welcome message on screen
c. create a function  Login() to accept pin from user and validate pin against pin against value 123
and return Message 'yes' or 'No'
d. create a derived class with name studentInfo
e. create a function accept() store student information like name, Registration Number, course name  but only when user login successfully.
f. create a function display() to display student information on screen.
g. create one more derived class with name grade_calc, this class will take inheritance from studentInfo class.
h. create a function cal() , this function will accept marks from Accept() function of studentInfo class and calculate percentage and Grade as per following:
Percentage between 80 to 100 A
Percentage between 70 to 80 B
Percentage between 60 to 70 C */
#include<iostream>
using namespace std;
class MyApp //Parent class also known as Base Class or super class
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
 class StudentInfo: public MyApp{ //child class also known as derived class or sub class
    public: string name,regNo,cname ;float marks;
    public: void Accept(){
        cout<<"\n Enter your name and registration number and course name";
        cin>>name>>regNo>>cname;
    }
    public: void display(){
        cout<<"\n Name of student:"<<name<<"\t"<<" Registration number of student:"<<regNo<<"\t"<<" Course Name is:"<<cname;
    }
 
};
class Grade_Calc : public StudentInfo {
     float per,marks;
     public : char cal(){
        cout<<"\n Enter Marks:";
     cin>> marks;
     cout<<"Marks of student are:"<<marks;
    per = (marks/500)*100;
    cout<<"\n Percentage of student is:"<<per;
    if (per>=80 && per<=100 ){
        cout<<" \n your Grade is A !";
        return 'A';
    }
    else if( per>=70 && per<=80){
cout<<" \n Your grade is B !";
return 'B';
    }
    else if( per>=60 && per<=70){
cout<<"\n Your grade is C !";
return 'c';
    }
    else{
     cout<<"\n You are not qualified !";
    }
}
};
int main(){
// StudentInfo obj;
Grade_Calc obj;
obj.Message();
string res;
res= obj.Login();
if(res=="yes"){
    obj.Accept();
    obj.display();
     char res1;
     res1= obj.cal();
}
else{
    cout<<"\n Memory is freed !";
}
}