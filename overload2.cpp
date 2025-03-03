/* Program to demonstrate working of function overloading and constructor overloading.
create a class with name LoginApp, with function name Register(),
overload this function three times in this program.
1. Register function will accept user name and Display "Hi Message with user name.
2. Register function will accept Registration Number and validate Registration number between (1 to 50)
3. Register function will accept marks and Calculate  credit, for every 10 marks provide 1 credit(MAX 100 Marks).
4. Create default constructor of class, display message "Welcome to LoginApp"
5. create parametrized constructor of class, that accept Login credentials, like Login Pin.*/
#include<iostream>
using namespace std;
class LoginApp{
  private: string name;
 public: void  Register(){
    cout<<"\n Enter the user name:";
    cin>>name;
    cout<<"\n The user name is:"<<name;
    cout<<"\n Hy!"<<name;
 }
  private: int RegNo;
  public: void Register(int RegNo){
   if (RegNo>=1 && RegNo<=50){
      cout<<"\n Your Registration Number is valid !";
      cout<<"\n The Registration Number of the user is:"<<RegNo;
   }
   else {
      cout<<"\n Your Registration Number is not valid !";
   }
  }

   private: int credits;
  public : void Register(float marks,int num){
   cout<<"\n The credits based on the obtained marks:\n";
   cout<<"Marks of the user are:"<<marks;
   credits=marks/num;
   cout<<"\n Your credits for the subject are:"<<credits;
}
};
class Constructor {
     public: Constructor(){
      cout<<"\n Welcome to LoginApp!!";
     }
};
class ParaConstructor {
     public : ParaConstructor (int LogPin) {
      if (LogPin==2005){
          cout<<"\n Your Login Pin is Validated!!";
          cout<<"\n Login Pin of user is:"<<LogPin;
      }
      else{
         cout<<"\n Your Login Pin is not validated !!";
      }
     }
};
int main(){
   int credits;
    LoginApp obj;
    Constructor obj1;//object creating for default Constructor
    obj.Register();
    int Rno;
    cout<<"\n Enter Your Registration Number:";
    cin>>Rno;
    obj.Register(Rno);
    int lp;
   cout<<"\n Enter the Login Pin:";
   cin>>lp;
    ParaConstructor obj2(lp);//object creating for parametrized Constructor
    float marks;
    cout<<"\n Enter your marks:";
    cin>>marks;
    obj.Register(marks,10);
    return 0;
}