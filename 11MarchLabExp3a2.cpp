//To delete the details of a student using a member function of student class
#include<iostream>
using namespace std;
class student {
    public: string studentname; int studentid;
    float marks,per;
    public: student(string name, int id,float mark) {
        studentname= name;
        studentid=id;
        marks=mark;
    }
    void display(){
        cout<<"\n Name  of student is:"<<studentname<<"\t"<<"Marks of student are :"<<marks<<"\t"<<"StudentId of Student is:="<<studentid;
    }
};
void semester1(student sem1){
    sem1.marks=400;
    cout<<"\n Marks in Semester 1:"<<sem1.marks;
}
void semester2(student sem2){
    sem2.marks=450;
    cout<<"\n Marks in Semester 2 is:"<<sem2.marks;
}
void update(student &obj){
    cout<<"\n Enter your updated Name, Marks,StudentId:";
    cin>>obj.studentname>>obj.marks>>obj.studentid;
}
int main(){
student obj1("abc",1,65);
obj1.display();
semester1(obj1);
obj1.display();
semester2(obj1);
obj1.display();
update(obj1);
cout<<"\n Your Updated Information is:";
obj1.display();
}