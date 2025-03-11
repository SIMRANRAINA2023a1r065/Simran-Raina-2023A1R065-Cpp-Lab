
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
void Delete(student *pobj){//pass by pointer
    cout<<"\n Student record not found !";
    pobj ->studentname=" ";
    pobj ->marks=0;
    pobj ->studentid=0;
}
int main(){
student obj1("XYZ",1,65);
obj1.display();
semester1(obj1);
obj1.display();
semester2(obj1);
obj1.display();
Delete(&obj1);
obj1.display();
}