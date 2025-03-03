#include<iostream>
using namespace std;
class Program1 {
    private : int pin;
    public : int validate() // Function with return type and no parameter
    {
        cout<<"Enter your pin";
        cin>>pin;
        if(pin ==1234) {
            return 1;
        }
        else{
            return 0;
        }
    }
    public : void Display_Balance(int Amount) //Function with no return type and  parameter//amount is a formal parameter i.e; defined at function defination
    {
        cout<<"\n Your Balance is" <<Amount; }
        public : void Fun() {
            cout<<"Hi"; 
        }
        }; // Terminator or end of statement
        int main() {
            Program1 obj;
            int res;
            int amt =10000;
            obj.Fun();

            res=obj.validate();
            if(res==1){
                cout<<"Authentication Successfull";
                obj.Display_Balance(amt);}//actual parameter is amt here; i.e; defined at function calling 
                else {
                    cout<<"Authentication Fail";}
                    return 0;
                }
        