// Write a program :
//create a class with name student_Management_System
//Store student Data from Rollno 1 to 10
//Data includes(Name,RollNo,Percentage)
//Display all data in Reverse order using Array og Object.
#include<iostream>
using namespace std;
class Student_Management_System {
    private: string Name; int RollNo; float Percentage;
    public: Student_Management_System(string N, int R,float P){
              Name=N;
              RollNo=R;
              Percentage=P;
    }
    public: void Display(){
        cout<<"\n Name="<<Name<<"\n Roll Number="<<RollNo<<"\n Percentage="<<Percentage;
    }
};
int main(){
    Student_Management_System obj[3]={{"Simran",65,95},{"payal",62,96},{"Mahi",78,99}};
    int i;
    for(i=2;i>=0;i--) {
        obj[i].Display();
    }
}