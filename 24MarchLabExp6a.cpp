/*To delete the the details of a course using a member function of course class*/
#include<iostream>
using namespace std;
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
     public : void display(){
         cout<<"\n Course Name is:"<<coursename <<"\t" <<"Course ID is:" <<courseid <<"\t" <<"Course starts on:"<<coursest <<"\t" <<"Course ends on:"<<courseend <<"\t" << "Course Credits are:"<<coursecredits;
     }
     };
     void Deletedetails(Course *pobj) {
        cout<<"\n Updated Course details after deletion of a course detail:";
        pobj -> coursename=" ";
        pobj -> courseid= 0;
        pobj -> coursest=" ";
        pobj -> courseend=" ";
        pobj -> coursecredits=0;
     }

     int main(){
        Course obj[3]={{"C++",1,"15-3-2025","18-5-2025",5},{"RDBMS",2,"16-4-2025","19-5-2025",4},{"COA",3,"18-2-2025","20-3-2025",4}};
       int i;
       for(i=0;i<=2;i++){
       obj[i].display();}
       cout<<"\n Program ended and energy is freed as course details are deleted !"; 
       Deletedetails(&obj[1]);
       int a;
          for(a=0;a<=2;a++){
       obj[a].display();
          }
    return 0;
     }