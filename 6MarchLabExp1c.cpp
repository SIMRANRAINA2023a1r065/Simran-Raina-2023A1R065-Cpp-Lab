#include<iostream>
using namespace std;
class Courses{
    private: string cname,cend,cst;int Cid,ccredits; float CGPA;
    public: Courses()
    {
     cout<<"Enter your Course name:";
     cin>>cname;
    cout <<"Enter your Course ID:";
    cin>>Cid;
    if(Cid<=8){
        cout<<" The course Id of the student is valid !  ";

    }
    else{
        cout<<"The course ID of the student is valid !";
    }
cout<<"\n Enter your Course Credits: ";
cin>>ccredits;
cout<<"\n Enter your Course start date:";
cin>>cst;
cout<<"\n Enter your course end date:";
cin>>cend;}
public: void Display(){
  cout<<"Course Name="<<cname<<"\t Course ID is:"<<Cid<<"\t Course Credits="<<ccredits<<"\t Course Start Date:"<<cst<<"\t Course End date:"<<cend;
}
};
int main(){
 Courses obj;
 obj.Display();
}