// Program to demonstrate working of Array of Object(Method1) with help of Parametrized Constructor
using namespace std;
#include<iostream>
class Program{//class declaration
    private : int RegNo;float Marks;//Private Member of class
    public: Program(int R , float M){//Parametrized Constructor of Class
        RegNo = R;
        Marks = M;
    }
    public: void Display(){//Function of class
        cout<<"\n RegNumber = "<<RegNo<<"\t"<<"Marks="<<Marks;
    }
};
int main(){
    Program obj[3]={{101,405},{102,430},{201,678}};//Array of object with manual initialization, best suited for minimum data storage
    int i;
    for(i=0;i<=3;i++){
        obj[i].Display();// calling of Display Function with Array of Object
        //obj[2].Display();
    }
}