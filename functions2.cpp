#include<iostream>
using namespace std;
string username,emailID,name;
int password;
class Login_Details {
    private : int password;
    public: void validate() {
        cout<<"Enter the password:\n";
        cin>>password;
     if (password==1234)
     {
        cout<<"Password is validated!";
        Display();
     }
     else {
        cout<<"Not validated password!";
     }
    }
    public : void Display() {
        cout<<"Welcome to MyApp";
    }
};
class User_Profile { 
    public : void Accept()
    {
        if(password==1234) {
      cout<<"Enter username:\n";
      cin>>username;
      cout<<"Enter emailID:\n";
      cin>>emailID;
      cout<<"Enter name:\n";
      cin>>name;
    }
}
    public : void Display() {
        cout<<"\n The username is:\n"<<username;
        cout<<"\n The EmailID is: \n"<<emailID;
        cout<<"\n The Name is :\n"<<name;
}
};
int main(){
    Login_Details obj1;
    obj1.validate();
    User_Profile obj2;
    obj2.Accept();
    obj2.Display();

    return 0;
}

