/* Write a program 
a. To create a base class with name Employement Management system
b. create a function with name salaryCalculate(), this function will
calculate Employees salary, accept Basic salary from user, Number of working days and calculate salary.
c. Create Derived class with name manager 
d. Override Base class function, salaryCalculate() and calaculate Manager salary 
adding component like TA 3% of Basic salary, DA 10% of Basic Salary
e. Create a derived class with name Developer
override Base class function, SalaryCalculate() and calculate Developer adding component like TA 5% of Basic salary, DA 12%
of basic salary
f. Create Derived class with name Accountant
g. Override Base class function, SalaryCalculate() and Calculate Accountant salary adding component 
like TA 4% of Basic salary, DA 9% of Basic Salary.
*/
#include <iostream>
using namespace std;

// a. Base class: EmploymentManagementSystem
class Employment_Management_System {
public:
    float basicSalary;
    int workingDays;
    float totalSalary;

public:
    // b. Function to calculate salary
    virtual void salaryCalculate() {
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Number of Working Days in a Month: ";
        cin >> workingDays;

        // Assuming 30 days in a month for full salary
        totalSalary = (basicSalary / 30) * workingDays;

        cout << "Calculated Salary for " << workingDays << " days is: " << totalSalary << endl;
    }
};
class Manager: public Employment_Management_System{
public: void salaryCalculate() override{
    cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Number of Working Days in a Month: ";
        cin >> workingDays;

        // Assuming 30 days in a month for full salary
        totalSalary = (basicSalary / 30) * workingDays;

        cout << "Calculated Salary for " << workingDays << " days is: " << totalSalary << endl;
cout<<"TA of basic salary: " <<basicSalary*3/100;
cout<<"DA of basic salary: " <<basicSalary*10/100;

}
};
class Developer: public Manager {
   public: void salaryCalculate() override{
        cout << "Enter Basic Salary: ";
            cin >> basicSalary;
    
            cout << "Enter Number of Working Days in a Month: ";
            cin >> workingDays;
    
            // Assuming 30 days in a month for full salary
            totalSalary = (basicSalary / 30) * workingDays;
    
            cout << "Calculated Salary for " << workingDays << " days is: " << totalSalary << endl;
    cout<<"\n TA of basic salary: " <<basicSalary*5/100;
    cout<<"\n DA of basic salary: " <<basicSalary*10/100;
    
    }
};
class Accountant: public Developer{
  public: void salaryCalculate() override{
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter Number of Working Days in a Month: ";
    cin >> workingDays;

    // Assuming 30 days in a month for full salary
    totalSalary = (basicSalary / 30) * workingDays;

    cout << "Calculated Salary for " << workingDays << " days in a month is: " << totalSalary << endl;
cout<<"TA of basic salary: " <<basicSalary*4/100;
cout<<"DA of basic salary: " <<basicSalary*9/100;

}
};
// Main function
int main() {
    // Creating object of the class
    Accountant obj;
    
    // Calling the function
    obj.salaryCalculate();
    return 0;
}
