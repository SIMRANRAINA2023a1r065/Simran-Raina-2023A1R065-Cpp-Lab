/*File Handling Program
Reading Data from file (any text file existing in our system)
using conditions*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name;
 int Rollno;
 cout<<"Enter your name:";
 cin>>name;
 cout<<"Enter your Roll No:";
 cin>>Rollno;
      // ifstream fobj("studentData1.txt");
     ofstream fout("studentData1.txt",ios::app);
      string reading_data;
      fout<<"\n Name = "<<name<<"\t "<<"Roll No = "<<Rollno<<endl;
     ifstream fobj("studentData1.txt");
     //ifstream fobj ("file1.txt");
     // when file u are reading is in different folder
     if(!fobj) //placed this condition to verify existence of file in the system
     {
        cout<<"File not Found !";
     }
     else{
     while(getline(fobj,reading_data))
     {
        cout<<"\n"<<reading_data;
     }
    }
     fobj.close();
     return 0;
}
//getline() method is used to read data from file with help of file object(fobj (user define name))
// and using variable
//of string reading_data(user define name)