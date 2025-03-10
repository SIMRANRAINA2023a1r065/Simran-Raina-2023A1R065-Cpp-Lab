// Method 1(Pass by value): Passing object as Parameter to Function
#include<iostream>
using namespace std;
class Result {
    public: string Name;int RollNo,credits; float Marks;//local variable
    public: Result(string Name1,int RollNo1, float Marks1,int credits1){ //Parameterized Constructor
        Name=Name1;
        RollNo=RollNo1;
        Marks=Marks1;
        credits=credits1;
    }
    public: void Display(){
        cout<<"\n Name="<<Name<<"\t Roll Number ="<<RollNo<<"\t Marks="<<Marks<<"\t credits="<<credits;
    }
};
void Semester1(Result Sem1){//class create kr rhe hai
Sem1.Marks=400;//Function call kiya hai //.-> access method
Sem1.credits=Sem1.Marks/10;
cout<<"\n Marks of Semester 1 is: "<<Sem1.Marks;
cout<<"\n Credits of Semester 1 is:"<<Sem1.credits;
}
void Semester2(Result Sem2){
    Sem2.Marks=350;
    Sem2.credits=Sem2.Marks/10;
    cout<<"\n Marks of Semester 2 is:"<<Sem2.Marks;
    cout<<"\n Credits of Semester 2 is:"<<Sem2.credits;
}
void Semester3(Result Sem3){
    Sem3.Marks=450;
    Sem3.credits=Sem3.Marks/10;
    cout<<"\n Marks of Semester 3 is:"<<Sem3.Marks;
    cout<<"\n Credits of Semester 3 is:"<<Sem3.credits;
}
int main(){
    Result obj("Simran",1,10,6);//function call kiya hai
    obj.Display();
    Semester1(obj);
    Semester2(obj);
    Semester3(obj);
}