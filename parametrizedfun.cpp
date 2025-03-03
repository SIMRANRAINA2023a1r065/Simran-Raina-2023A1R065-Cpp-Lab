/* program to demonstrate working of Constructor */ // Example of default Constructor (with no parameter and no default values)
#include<iostream>
using namespace std;
class Program // class with name Program
{
   public: Program(string name, int MobNo ) //class Constructor 
   {
       cout<<"Name is:"<<name;
       cout<<"\n Mobile Number is:"<<MobNo;
   }
};
int main()
{
    string nm;
    int mob;
    cout<<"Enter Name and Mobile No. : ";
    cin>>nm>>mob;
    Program obj(nm,mob);
   //Program obj("ABC",676869); //class object creating , calling function
   return 0;
}