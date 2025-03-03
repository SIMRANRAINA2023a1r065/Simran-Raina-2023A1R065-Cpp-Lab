// Program to create a class with name Student_Data with function name, Welcome_Message(), this function on execution will display a message: Welcome to MIET jammu
#include<iostream>// function with no return type and no parameter
using namespace std;
class Student_Data{
public: void Welcome_Message()
{
    cout<<"Welcome to MIET Jammu!";
}
private : string Name;
int RegNo;
public:  string Validate_RegNo() //function with return type and no parameter// //Now, we will add 1 more Function with name Validate_RegNo(), this function will accept student name and  registration number from student and validate it. (valid RegNo's are from 61 to 120)
{
cout<<"Enter student name:";
cin>>Name;
cout<<"Enter registration number:";
cin>>RegNo;
if(RegNo>=61 && RegNo<=120)
{
    return "true";
}
else{
 return "False";
}
}
};
int main(){
    Student_Data obj;
    obj.Welcome_Message();
    string res;
    res= obj.Validate_RegNo();
    if(res=="true")
    {
        cout<<"login successful!";
    }
    else{

        cout<<"login fail!";
    }
    return 0;
}