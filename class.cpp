#include<iostream>
using namespace std;
class Welcome {
    private: string name;
    public : void Welmess(){
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Welcome to Student Management System program !"<<name;
    }
};
int rollno;
string name,departmentname,section,DOB;
class StudentProfile {
    private:int rollno;string name,departmentname,section,DOB;
    public: void stupro(){
     cout<<"\n Enter your name:";
     cin>>name;
     cout<<"\n Enter your Department:";
     cin>>departmentname;
     cout<<"\n Enter Your Roll No:";
     cin>>rollno;
     cout<<"\n Enter your section:";
     cin>>section;
     cout<<"\n Enter your Date of Birth:";
     cin>>DOB;
     cout<<"\n Student name:"<<name;
     cout<<"\n Student Department is:"<<departmentname;
     cout<<"\n Student Roll No is:"<<rollno;
     cout<<"\n Student Section is:"<<section;
     cout<<"\n Student DOB is:"<<DOB;
    }
};
class Stucourses {
    private: string coursename;int cid; string cen,ced;
    public: void courses() {
   cout<<" Enter your Course name:";
   cin>>coursename;
   cout<<"\n Enter your course ID:";
   cin>>cid;
   cout<<"\n Enter your Course Enrollment date:";
   cin>>cen;
   cout<<"\n Enter your course Completion date:";
   cin>>ced;
   cout<<"\n student Course Name:"<<coursename;
   cout<<"\n Student Course Id:"<<cid;
   cout<<"\n Student Course Enrollment date is:"<<cen;
   cout<<"\n Student Course Completion date is:"<<ced;
    }
};
class Finalresult {
    private:float CGPA;int marks;
    public : void finres(){
        cout<<"\n Enter your Semester CGPA:";
        cin>>CGPA;
        cout<<"\n Enter Your Total marks out to 500:";
        cin>>marks;
        cout<<"\n Student CGPA is:"<<CGPA;
        cout<<"\n Student Total Marks out of 500:"<<marks;
    }
};
class studentAttendance {
    private: int atten;
    public : void attendance(){
        cout<<"\n Enter you attendance from 100%:";
        cin>>atten;
        if(atten>=0 && atten<=75){
            cout<<"\n Your attendance is low  and yopu are not eligible for the final exams!";

        }
        else{
            cout<<"\n Your attendance is Fine and you are eligible for the final exams !";
            cout<<"\n Your attendance is:"<<atten;
        }
    }
};
int main(){
    Welcome obj;
  obj.Welmess();
    StudentProfile obj1;
    obj1.stupro();
    Finalresult obj2;
    obj2.finres();
    studentAttendance obj3;
    obj3.attendance();
}
