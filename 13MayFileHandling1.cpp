/*Program :- File Handling
Performing Write operation in a text file
e.g; Write Student Name and Roll No in Text file*/
#include<iostream>
#include<fstream> // This is the header file used to handle file in cpp
//Allow us to access predefine classes in our code to support operation
//Step 1
using namespace std;
int main()
{
 string name;
 int Rollno;
 cout<<"Enter your name:";
 cin>>name;
 cout<<"Enter your Roll No:";
 cin>>Rollno;
 ofstream fout("studentData1.txt",ios::app); //Step 2
 //ofstrem is a predefined class present in fstream header file and we are accessing this class in our code 
 //using object fout(fout is a user define object name)
 //use absolute or relative path for file
 fout<<"Name = "<<name<<"\t "<<"Roll No = "<<Rollno;
 //using object fout with operator << , we are passing information to the text file
// Next, we are closing the file
 fout.close();
 return 0;
}