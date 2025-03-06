#include<iostream>
using namespace std;
class WelcomeMessage{
    public: string name;
    public:  void welmess()
    {
     cout<<"Enter your name:";
     cin>>name;
    cout<<"Hy! Welcome to student Management System "<<name;
    }
    };
    class Persdetails{
    public: string name,departmentname,section,rollno,semester;
    public: void PersonalDetails(){
        cout<<"\n Enter Student name:";
        cin>>name;
        cout<<"\n Enter student Department:";
        cin>>departmentname;
        cout<<"\n Enter Student Section:";
        cin>>section;
        cout<<"\n Enter student Current Semester:";
        cin>>semester;
        cout<<"\n Enter student Roll No. :";
        cin>>rollno;
        cout<<"The student name is: "<<name;
      cout<<"\n The student Department is:"<<departmentname;
      cout<<"\n The student section is: "<<section;
      cout<<"\n The student semester is: "<<semester;
      cout<<"\n The student roll no is: "<<rollno;

    }
    private:string coursename,courseid,coursestart,courseend;
    public: void courses(){
        cout<<"\n Enter Course name:";
        cin>>coursename;
        cout<<"\n Enter Courseid:";
        cin>>courseid;
    cout<<"Enter Course start date:"<<coursestart;
    cin>>coursestart;
    cout<<"Enter Course Completion date:"<<courseend;
    cin>>courseend;
}
    };

    class assignscore{
    public : int s1,s2,s3,s4;
    public: void Assignments(){
        cout<<"Your Assignment Scores for individual Subjects are:";
        cout<<"\n Enter Assignment Scores of RDBMS:";
        cin>>s1;
        cout<<"\n Enter Assignment scores of COA:";
        cin>>s2;
        cout<<"\n Enter Assignment scores of C++:";
        cin>>s3;
        cout<<"\n Enter Assignment scores of Discrete Mathematics:";
        cin>>s4;
        cout<<"\n The RDBMS Assignment score is:"<<s1;
      cout<<"\n The COA Assignment score is:"<<s2;
      cout<<"\n The C++ Assignment score is:"<<s3;
      cout<<"\n The Discrete Mathematics Assignment score is:"<<s4;
    }
};
class attendance{
    private: int atten;
    public: void Attendance(int atten){
        if(atten>=1 && atten<=75){
            cout<<"\n Your Attendance is low ! You are at shortage and you will not be able to sit in the final examination";
        }
        else{
            cout<<"\n Your Attendance is fine! You are able to sit in the final examination ";
        }
    }
};
int main(){
    WelcomeMessage obj;
    obj.welmess();
    Persdetails obj1;
    obj1.PersonalDetails();
    obj1.courses();
    assignscore obj2;
    obj2.Assignments();
    attendance obj3;
    int atd;
    cout<<"\n Enter your Overall attendance:";
    cin>>atd;
    cout<<"The overall attendance of Student is:"<<atd;
    obj3.Attendance(atd);
    return 0;
}
/* Exp 1a. Analyze and design classes for a student management system.
 classes for Student Management system:-
 1. student class
 To store and display student information
 2. course class
 To store and display course details
 3. Admin class
 To change/Add/Delete/Update, information of student or course
 4. Examination
 To store and display information about the ongoing or upcoming exams.
 5. Result Class
 To store and display Result.
 6. Department Class
 To store and Display information of All Schools and Departments of College.
 7. Notification Class
 To Display all latest information and updates
 */