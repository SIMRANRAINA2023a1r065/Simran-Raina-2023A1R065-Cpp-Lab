//To add the details of a student using a parameterized constructor of student class. 
#include<iostream>
using namespace std;
class Student{
    public: string StudentName,grade; int StudentID;
    float Marks, per;
    public: Student(string Name, int ID, float Mark){
        StudentName= Name;
        StudentID =ID;
        Marks = Mark;
    }
    void display(){
        cout<<"\n Information Entered by the student is ";
        cout<<"Name = "<<StudentName<<"\t Studrnt Id is "<<StudentID<< "\t Marsks are ";
        cout<<Marks;
    }
    char Grade(){
        per=Marks/500*100;
        if(per>=80 && per<=100){
            cout<<"\n Your Grade is A";
            return 'A';
        }
        else if(per>=70 && per<=80){
            cout<<"\n Your Grade is B";
            return 'B';
        }
        else if(per>=50 && per<60){
            cout<<"\n Your Grade is C";
            return 'C';
        }
    
    else{
        cout<<"\n Not Qualified  !";
    }
}
 public: void Club_Assignment(char grade){
    if(grade=='A'){
        cout<<"\n Sports Club is Assigned to You !";
    }
    else if(grade=='B'){
        cout<<"\n NSS Club is Assigned to You !";
    }
    else if(grade=='C'){
        cout<<"\n IEEE Student Chapter Club is Assigned to you !";
    }
    else {
        cout<<"\n Not any club is assigned to you !";
    }
 }
};

int main(){
    Student obj[5]={{"Ram",101,450},{"Sham",102,488},{"Sita",103,350},{"Gita",104,12},{"Rita",105,499.90}};
    int i; char res;
    for(i=0;i<5;i++){
         cout<<"\n Information of Student "<<obj[i].StudentName << " with id "<<obj[i].StudentID;
         obj[i].display();
         res=obj[i].Grade();
         obj[i].Club_Assignment(res);
    }
    return 0;
}
