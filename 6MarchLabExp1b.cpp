#include<iostream>
using namespace std;
class Student {
    private: string name;float CGPA;
    public: Student()
    {
     cout<<"Enter your name:";
     cin>>name;
    cout <<"Enter your CGPA for the previous semester:";
    cin>>CGPA;
    if(CGPA<=8){
        cout<<" \n Hy !"<<name;
        cout<<" Your  Previous Semester Performance is average ! You need to improve more...:";
    }
    else{
        cout<<"\n Hy !"<<name;
        cout<<" Your previous Semester Performance is Pretty good ... keep it up!";
    }
    }
    private: string department,section,semester;int rollno;
    public: void DisplayDetails(){
        cout<<"\n Now to show your Result you have to enter the details as follows:";
        cout<<"\n Enter the Department name:";
        cin>>department;
            cout<<"Enter Your Semester:";
            cin>>semester;
            cout<<" Enter your Section:";
            cin>>section;
            cout<<"Enter your Roll No. :";
            cin>>rollno;
            if(rollno>=61 && rollno<=120)
        {
            cout<<"\n Your result is printed successfully !";
        }
        else{
            cout<<"\n Your result is not printed successfully due to incorrect roll no according  to the records! ";
        }
    }
    private: string coursename,cstr,cend;int courseID,ccredits;
    public: void Courses() {
        cout<<"\n Enter Course Name:";
        cin>>coursename;
        cout<<"\n Enter Course ID:";
        cin>>courseID;
        cout<<"\n Enter Course Credits:";
        cin>>ccredits;
        cout<<"\n Enter Course Start Date:";
        cin>>cstr;
        cout<<"\n Enter Course End Date:";
        cin>>cend;
    }
    public: ~Student (){
        if(rollno>=61 && rollno<=120){
         cout<<"\n The name of the Student is:"<<name;
         cout<<"\n The Department of the Student is:"<<department;
         cout<<"\n The Semester of the Student is:"<<semester;
         cout<<"\n The Section of the Student is:"<<section;
         cout<<"\n The Roll No of the Student is:"<<rollno;
         cout<<"\n The CGPA of the Student is:"<<CGPA;
        cout<<"\n Course Name of student is:"<<coursename;
        cout<<"\n Course ID of student is:"<<courseID;
        cout<<"\n Course Credits of Student are:"<<ccredits;
        cout<<"\n Course Start Date of Student is:"<<cstr;
        cout<<"\n Course End date of Student is:"<<cend;
    }
}
};
int main(){
    Student obj;
    obj.DisplayDetails();
    obj.Courses();
    //destructor automatically executes at end and constructor executes at the beginning of the program
    return 0;
}