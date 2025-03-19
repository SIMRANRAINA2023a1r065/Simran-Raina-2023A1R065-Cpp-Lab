/* 12/03/25 */

/*Write a program for Employee Management System 
a. Craete a class with Name Employee 
b. create a parametrized constructor to initalize class attributes like, 
Employee Name, Employee Code, Basic Salary.
c.  create a member fn display() to display records on screen.
d. create a function Gross_Salary() which calculate components of salary like TA(3% of Basic Salary),
DA(4% of Basic Salary),HRA(5% of Basic Salary), PF(4% of Basic Salary).
Gross Salary is sum of basic,TA,DA,HRA. PF is deducted from Gross Salary.
e.Create a function Update() to increment Basic Salary of Employees as:-
    Gross Salary between 10000 to 20000, 10% increment 
    Gross Salary between 20000 to 30000, 15% increment
    Gross Salary above 30000, 20% increment 
    f. create a fn Update_Profile(), if user wants to correct its name or code.
    g. Create a fn with name Get_Data() that only reads Employee Data but not able to modify user data.
*/

#include<iostream>
using namespace std;
class Employee{
    public: string ename; int EmpCode, BasicSal, Grossal;
     public: Employee(string EmployeeName, int EmployeeCode, int BasicSalary){
      ename=EmployeeName;
      EmpCode=EmployeeCode;
      BasicSal=BasicSalary;
     // Grossal=Grosal;
     }

   public: void display(){
    cout<<"\nname of Employee: "<< ename;
    cout<<"\tEmployee Code is: "<<EmpCode;
    cout<<"\tBasic Salary of emp is: "<<BasicSal;
    cout<<"\tGross Salary is: "<<Grossal<<"\n";
    cout<<"\n****calculate the components of the salary****";
    cout<<"\nTA(3% of Basic Salary) is: "<<BasicSal*3/100;
    cout<<"\tDA(4% of Basic Salary) is: "<<BasicSal*4/100;
    cout<<"\tHRA(5% of Basic Salary) is: "<<BasicSal*5/100;
    cout<<"\tPF(4% of Basic Salary) is: "<<BasicSal*4/100;
    cout<<"\tgross salary is: "<<Grossal<<"\n";
    cout<<"\n";

   }

//    public: void Incremented_display(){
//     cout<<"\nThe name of Employee: "<< ename;
    
//     cout<<"\tThe updated / incremented Basic Salary of emp is: "<<BasicSal<<"\n";

//    }

//    public: int Gross_Salary(){
//     // cout<<"\ncalculate the components of the salary ";
//     //   cout<<"\nthe TA(3% of Basic Salary) is: "<<BasicSal*3/100;
//     //   cout<<"\tthe DA(4% of Basic Salary) is: "<<BasicSal*4/100;
//     //   cout<<"\tthe HRA(5% of Basic Salary) is: "<<BasicSal*5/100;
//     //   cout<<"\tPF(4% of Basic Salary) is: "<<BasicSal*4/100;
//       Grossal=(BasicSal+BasicSal*3/100+BasicSal*4/100+BasicSal*5/100)-BasicSal*4/100;
//        cout<<"\n";
//       return Grossal;
//    }
   
   public: void Gross_Salary(){
      Grossal=(BasicSal+BasicSal*3/100+BasicSal*4/100+BasicSal*5/100)-BasicSal*4/100;
      
   }



}; 
 void update(Employee &obj){  //var ko access krne ke liye, take obj in pass by ref, pass by value fns 
    if(obj.Grossal>=10000 && obj.Grossal<=20000){
        obj.BasicSal=obj.BasicSal*1.10;
        cout<<"\n->10% increment in basic sal= "<<obj.BasicSal<<"\n";
    }
    else if(obj.Grossal>=20000 && obj.Grossal<=30000){
        obj.BasicSal=obj.BasicSal*1.15;
        cout<<"\t->15% increment in basic sal= "<<obj.BasicSal<<"\n";
    }
    else if(obj.Grossal>=30000){
        obj.BasicSal=obj.BasicSal*1.20;
        cout<<"\t->20% increment in basic sal= "<<obj.BasicSal<<"\n";
    }
}
    void Get_Data(const Employee obj){
        cout<<"\nThe name of Employee: "<< obj.ename;
        cout<<"\tEmployee code is: "<< obj.EmpCode;
    cout<<"\tThe updated / incremented Basic Salary of emp is: "<<obj.BasicSal<<"\n";

    }
    void Update_Profile(Employee *obj){
        string choice;
        cout<<"\n I f user wants to correct its name or code, write update: ";
        cin>>choice;
        if(choice=="update" || "Update"){
            cout<<"\nenter name: ";
           cin>> obj->ename;
           cout<<"\tenter code: ";
           cin>>obj->EmpCode;
            cout<<"\nthe updated name and code is: "<<obj->ename<<"\t"<<obj->EmpCode<<"\n";
            
        }
        else{
            cout<<"\n User not want to update the details or enter update correctly\n";
        }
    }

int main(){
    int i;
    // Employee obj[4]={{"Mahi",101,20000,res},{"Payal",102,19000,res},{"Simran",103,15800,res},{"Jerry",104,34000,res}};
    Employee obj[4]={{"Mahi",101,20000},{"Payal",102,19000},{"Simran",103,15800},{"Jerry",104,34000}};
    
    // for(i=0;i<4;i++){
    //     res=obj[i].Gross_Salary();
    // }
    for(i=0;i<4;i++){
        obj[i].Gross_Salary();
        obj[i].display();
       update(obj[i]);
    }
    cout<<"\n****Reading Updated details like: Basic Salary, name, empcode.. of the employees after Incrementation / updation****\n";
     for(i=0;i<4;i++){
      
       // obj[i].Incremented_display();
       Get_Data(obj[i]);

     }
     Update_Profile(&obj[i]);
      return 0;
    }
