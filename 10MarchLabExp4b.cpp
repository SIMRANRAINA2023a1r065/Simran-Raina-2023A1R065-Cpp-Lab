/* To get the results of students by roll no using a member function of student class*/
#include<iostream>
using namespace std;
class Student {
    public: int rollno;string name,department,semester,section;float marks,CGPA;
    public: Student(string N,int rno,string dep,string Sem,string sec,float M,float cgpa)
    {
     name=N;
     rollno=rno;
     department=dep;
     semester=Sem;
     section=sec;
     marks=M;
     CGPA=cgpa;
    }
    public: void DisplayDetails(){
            cout<<" \n Your Name is:"<<name << " \t" <<" Your Roll No is:"<<rollno<< "\t"<<"Your department is:"<<department<<"\t"<<"Your Semester is:"<<semester<<"\t"<< "Your Section is:"<<section<<"\t"<<" Your Marks are:"<<marks<<"\t"<<" Your CGPA is:"<<CGPA;
    }
        
    int search(){
        int rollno1;
        cout<<"\n Enter your Roll No:";
        cin>>rollno1;
        return rollno1;
      }  
   };
   int main(){
    Student obj[3]={{"Simran",65,"CSE","4th","A4",478,9.36},{"Payal",62,"ECE","4th","A3",489,9.57},{"Mahi",78,"Civil","4th","A2",490,9.78}};
    int i, rollno2;
   for(i=0;i<=2;i++){
        obj[i].DisplayDetails();}
        rollno2=obj[1].search();
        for(i=0;i<3;i++){
            if(rollno2==obj[i].rollno){
                cout<<"\n Roll No is valid and your result is as follows:  !";
                cout<<"\n Student`s Name is:"<<obj[i].name;
                cout<<"\n Student`s Roll No is:"<<obj[i].rollno;
                cout<<"\n Student`s department is :"<<obj[i].department;
                cout<<"\n Student`s Semester is:"<<obj[i].semester;
                cout<<"\n Student`s Section is:"<<obj[i].section;
                cout<<"\n Student`s Marks are:"<<obj[i].marks;
                cout<<"\n Student`s Previous Sem CGPA is:"<<obj[i].CGPA;
            }
    
        }
        return 0;
        }