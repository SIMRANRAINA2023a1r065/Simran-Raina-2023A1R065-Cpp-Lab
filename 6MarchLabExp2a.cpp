/* Exp 2(a). To allocate appropriate access specifiers to data members of student 
and course class along with justification in comments.
We declared Member Variables or Attributes of Class Student and Class Course
like student Name, student ID, Marks, Percentage, Course Name,
Course ID, Course Credit as private member to protect our data from unauthorized accesss.
We declared Member Function like Display(),Grade(),Club Assignment(),
Course_Information_Display(),Course Selection() of class Course and Class Student
as public to share information between different members of class.
we declared Constructor and Destructor of Class Course and Class Student as public
because we cannot assign any other access specifier to them.
In OOPS Programming we prioritize data over functions and provide layer to security
to member variables to protect information stored inside member variables is not
accessible by any unauthorized entity.*/
#include<iostream>
using namespace std;
class Student {
    private:int rollno; string name,departmentname,section;//data members-> Variables that are a part of a constructor //we declared Member Variables or Attributes of Class Student like:rollno,name,departmentname,section as private member to protect our data from unauthorized accesss.
    public:  Student(string Name, int rno,string dptname,string sec){ //We declared constructor of class Student as public because we cannot assign any other access specifier to them.
     name=Name; /*In OOPS Programming we prioritize data over functions and provide layer to security
     to member variables to protect information stored inside member variables is not
     accessible by any unauthorized entity.*/
     rollno=rno;
     departmentname=dptname;
     section=sec;
    }
     void display1(){
        cout<<"Name of student is:"<<name<<" \t Roll No. of student is:"<<rollno<<" \t Department of Student is: "<<departmentname<<" \t Section of Student is: "<<section ;
    }
    private: string Section;
public: void mentorsel(){// we declared member function like: mentorsel() of class student as public to share information between different members of class.
cout<<"\n Enter your Section:";
cin>>Section;
 if(Section=="A2"|| Section=="A4") {
    cout<<"\n Your  mentor is Sukhmeet Ma`am !";
 }
 else if(Section=="A1" || Section=="A3"){
    cout<<"Your mentor is BhagyaLakshmi Ma`am";
 }
 else{
    cout<<"\n Your mentor is not selected !";
 }
}
public:~Student(){ //We declared destructor of class Student as public because we cannot assign any other access specifier to them.
    cout<<"\n Destructor is called and Student record is shown above successfully !";
}
}; 
class Course {
    private: int ccredits,ccid; string Coursename,cend,cstr; //data members-> Variables that are a part of a constructor //we declared Member Variables or Attributes of Class Course like:ccredits,ccid; string Coursename,cend,cstr;as private member to protect our data from unauthorized accesss.
    public: Course(string cname, int cid,int credits, string ced, string cst){ //We declared constructor of class Student as public because we cannot assign any other access specifier to them.
        Coursename=cname;/*In OOPS Programming we prioritize data over functions and provide layer to security
        to member variables to protect information stored inside member variables is not
        accessible by any unauthorized entity.*/
        ccid=cid;
        ccredits=credits;
        cend=ced;
         cstr=cst;}
         void display2(){
        cout<<"\n Name of Course is:"<<Coursename<<" \t ID of Course is:"<<ccid<<" \t Credits of Student in course is: "<<ccredits<<" \t Course Start date is: "<<cstr<<" \t Course End date is:"<<cend ;
}
public: void Course_Eval(){// we declared Member Function like: Course_Eval() of Course class as public to share information between different members of class.
    if(ccredits>=5){
        cout<<"\n You have Passed as your credits are more than 5 for all !";
    }
    else{
        cout<<"\n You have Failed !";
    }
}
public: ~Course(){//We declared destructor of class Course as public because we cannot assign any other access specifier to them.
    cout<<"\n Destructor is called and Course Record shown above  successfully !";
}
};
int main(){
    Student obj[3]={{"Simran",65,"CSE","A4"},{"Payal",62,"ECE","A1"},{"Mahi",78,"BBA","A3"}};
    int i;
    for(i=0;i<3;i++){
        obj[i].display1();
    }
    obj[i].mentorsel();

    Course obj1[3]={{"CSE",1,5,"12-3-2025","14-4-2026"},{"ECE",2,6,"13-5-2024","15-4-2025"},{"BBA",3,7,"17-8-2025","10-8-1026"}};
    int a;
    for(a=0;a<2;a++){
        obj1[a].display2();
    }
    obj1[a].Course_Eval();
return 0;
}
