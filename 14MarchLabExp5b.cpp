/* To Update the details of a course using a member function of course class */
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
    };
  void update(Course &obj2){
     obj2.coursename= "Mathematics";
     obj2.courseid=4;
     obj2.coursest="14-2-2025";
     obj2.courseend="16-4-2025";
     obj2.coursecredits=4;
    
 }
int main(){
 Course obj[3]={{"C++",1,"15-3-2025","18-5-2025",5},{"RDBMS",2,"16-4-2025","19-5-2025",4},{"COA",3,"18-2-2025","20-3-2025",4}};
int i;
for(i=0;i<=2;i++){
obj[i].display();}
update(obj[1]);
cout<<"\n Updated Course details are:\n";
int a;
for(a=0;a<=2;a++){
obj[a].display();}
return 0;
}

