//write a program to store 10 rollno. of weak Learners of your class and 10 rollno. of advance Learners of your calss, according to you.
//store rollno.`s in two different array and display the record.
#include<iostream>
using namespace std;
class Learners {
    private:int weakLearners[10]={62,78,65,75,61,63,100,101,120,77};
    private:int advanceLearners[10]={11,20,45,22,109,45,33,90,44,23};
    public: void Display(){
        cout<<"\n The Weak Learners are:";
        cout<<"\n"<<weakLearners[0];
        cout<<"\n"<<weakLearners[3];
        cout<<"\n"<<weakLearners[5];
        cout<<"\n"<<weakLearners[9];
        cout<<"\n The Advance Learners are:";
        cout<<"\n"<<advanceLearners[0];
        cout<<"\n"<<advanceLearners[4];
        cout<<"\n"<<advanceLearners[5];
        cout<<"\n"<<advanceLearners[8];

       }
};
int main(){
    Learners obj;
    obj.Display();
    return 0;
}