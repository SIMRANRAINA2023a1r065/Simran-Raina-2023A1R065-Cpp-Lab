/* To add the details of a course using a parametrized Constructor of Course Class*/
#include<iostream>
using namespace std;
class Course{
    public: string coursename,courseend,coursest;int courseid,coursecredits; 
    public: Course(string cname,string cst, string cend,int cid, int ccredits)
    {
        coursename=cname;
        coursest=cst;
        courseend=cend;
        courseid=cid;
        coursecredits=ccredits;
    }
    void display(){
        cout<<"\n Course Name is:"<<coursename <<"\t" <<"Course ID is:" <<courseid <<"\t" <<"Course starts on:"<<coursest <<"\t" <<"Course ends on:"<<courseend <<"\t" << "Course Credits are:"<<coursecredits;
    }
};
int main(){
 Course obj[3]={{"C++","15-3-2025","18-5-2025",1,5},{"RDBMS","16-4-2025","19-5-2025",2,4},{"COA","18-2-2025","20-3-2025",3,4}};
int i;
for(i=0;i<=2;i++){
obj[i].display();
}
return 0;
}