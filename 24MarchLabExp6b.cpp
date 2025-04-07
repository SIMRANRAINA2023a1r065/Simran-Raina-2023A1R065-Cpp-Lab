/* To get the details of a course by course_id using a member function of course class*/
#include<iostream>
using namespace std;
 //string coursename,courseend,coursest;int courseid,coursecredits; //local variable
class Course{
   public: string coursename,courseend,coursest;int courseid,coursecredits; //local variable
    public: Course(string cname,int cid, string cst,string cend, int ccredits)
    {
        coursename=cname;
        courseid=cid;
        coursest=cst;
        courseend=cend;
        coursecredits=ccredits;
    }
    void display(){
        cout<<"\n Course Name is:"<<coursename <<"\t" <<"Course ID is:" <<courseid <<"\t" <<"Course starts on:"<<coursest <<"\t" <<"Course ends on:"<<courseend <<"\t" << "Course Credits are:"<<coursecredits;
    }
    int search(){
      int courseid1;
      cout<<"\n Enter your Course Id:";
      cin>>courseid1;
      return courseid1;
    }  
 };
    
int main(){
 Course obj[3]={{"C++",1,"15-3-2025","18-5-2025",5},{"RDBMS",2,"16-4-2025","19-5-2025",4},{"COA",3,"18-2-2025","20-3-2025",4}};
int i,courseid2;
for(i=0;i<=2;i++){
obj[i].display();}
courseid2=obj[1].search();
for(i=0;i<3;i++){
    if(courseid2==obj[i].courseid){
        cout<<"\n course id is valid !";
        cout<<"\n course Name is:"<<obj[i].coursename;
        cout<<"\n Course Id is:"<<obj[i].courseid;
        cout<<"\n course starts on:"<<obj[i].coursest;
        cout<<"\n course ends on:"<<obj[i].courseend;
        cout<<"\n Course credits are:"<<obj[i].coursecredits;
    }
}
return 0;
}

