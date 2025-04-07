/* To search student details by roll no using a member function of student class*/
#include<iostream>
using namespace std;
class Student {
    public: int rollno;string name;float CGPA ;string semester,section,department;
    public: Student(string N,int rno,string dep ,string sem,string sec,float cgpa)
    {
        name=N;
        rollno=rno;
        department=dep;
        semester=sem;
        section=sec;
        CGPA=cgpa;
    }
    void display(){
        cout<<"\n  Name of student is:"<<name <<"\t" <<" Roll No. of student is:" <<rollno <<"\t" <<"departemnt of student is :"<<department <<"\t" <<"Semester of student is:"<<semester <<"\t" << "Section of student is:"<<section<<"\t"<<"CGPA of student is:"<<CGPA;
    }

    int search(){
        int rollno1;
        cout<<"\n Enter your Roll No:";
        cin>>rollno1;
        return rollno1;
      }  
   };
int main(){
    Student obj[3]={{"Simran",65,"CSE","4th","A4",9.36},{"Payal",62,"ECE","4th","A3",9.57},{"Mahi",78,"Civil","4th","A2",9.78}};
    int i, rollno2;
   for(i=0;i<=2;i++){
        obj[i].display();}
        rollno2=obj[1].search();
        for(i=0;i<3;i++){
            if(rollno2==obj[i].rollno){
                cout<<"\n Roll No is valid !";
                cout<<"\n Student`s Name is:"<<obj[i].name;
                cout<<"\n Student`s Roll No is:"<<obj[i].rollno;
                cout<<"\n Student`s department is :"<<obj[i].department;
                cout<<"\n Student`s Semester is:"<<obj[i].semester;
                cout<<"\n Student`s Section is:"<<obj[i].section;
                cout<<"\n Student`s Previous Sem CGPA is:"<<obj[i].CGPA;
            }
        }
        return 0;
        }