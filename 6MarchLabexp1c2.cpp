//To create a course class, its constructor,destructor and member functions.
#include<iostream>
using namespace std;
class course{
    public: string CourseName; int CourseID; int CourseCredits;
    public: course(string Name, int ID,int Credits) {
        CourseName= Name;
        CourseID= ID;
        CourseCredits=Credits;
    }
    void Display(){
      cout<<"\n Course Name is:"<<CourseName<<"\t Course ID is:"<<CourseID;
      cout<<"\n Course Credits are:"<<CourseCredits;
    }
    private: float per; int atten;
    public: void CourseAssignment() {
        cout<<"\n Enter Percentage and Attendance:";
        cin>>per>>atten;
        if(per>80 || atten>90){
            cout<<"\n You have option of all courses to opt !";
        }
        else if(per>70 && per<80 || atten>80){
            cout<<"\n You can opt Java Course !";
        }
        else if(per>60 && per<70 || atten>70){
            cout<<"\n You can opt CPP Course !";
        }
        else if(per>60 && per<70 || atten>60){
            cout<<"\n You can opt PHP Course !";
        }
        else{
            cout<<"You can opt C Course! ";
        }
        //Here Accept Student percentage, Attendance and Assign Course According to
        /*1. Percentage greater than 80 or Attendance more than 90 , course option ALL
        2. Percentage between 70 to 80 or Attendance more than 80 Course Option Java
        3. Percentage between 60 to 70 or Attendance more than 70 Course Option CPP
        4. Percentage between 60 to 70 or Attendance more than 60 Course option PHP
        5. Percentage between 50 to 60 or Attendance more than 50 Course Opytion C*/
    }
};
int main(){
course obj[5]={{"C",1,8},{"C++",2,6},{"Java",3,4},{"SQL",4,12},{"PHP",5,16}};
int i;char res;
for(i=0;i<5;i++){
    obj[i].Display();
}
obj[i].CourseAssignment();
}