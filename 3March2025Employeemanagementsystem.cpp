 /*class activity:
    create a employee Management System,create a class with name employee,
    with attributes like, EmpID,EmpName,Address.
    Use default Constructor that initialize default values,
    use paramerized constructor to initialize employee details,
    member function InputDetails() to accept input from user,
    member function Display()to display details entered by the user.
    Destructor to display message all data erased.*/
    #include<iostream>
    using namespace std;
    class Employee
    {
        private:int empid;string empname,address;
       public:Employee()//default constructor
        {
            empid=0;
        }
        public:Employee(int id,string name,string add)//parameterized constructor
        {
            empid=id;
            empname=name;
            address=add;  
        }
         public:void InputDetails()
        {
            cout<<"Enter the Employee ID= ";
            cin>>empid;
            cout<<"\n Enter the Employee Name= ";
            cin>>empname;
            cout<<"\n Enter the Employee Address= ";
            cin>>address;
        }
        public:void display()
        {
            cout<<"\n Employee ID is: "<<empid;
            cout<<"\n Employee Name is: "<<empname;
            cout<<"\n Employee address is: "<<address;
        }
        public :~Employee()
        {
            cout<<"\n All data is Erased !";
        }
    };
    int main()
        {
            Employee obj[5]={{1,"Bhawana","Janipur"},{2,"Alice","Nagrota"},{3,"Ananya","kotbhalwal"},{4,"Sanya","Roopnagar"},{5,"Simran","Amphala"}};
            int i;
            for(i=0;i<5;i++)
            {
                obj[i].display();
                
            } 
            return 0;  
        }
