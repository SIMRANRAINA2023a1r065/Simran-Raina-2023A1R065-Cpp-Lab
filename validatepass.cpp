#include<iostream>
    using namespace std;
    string username,emailid,name;
    int password;
    class Login_Details{
    
    public: void validate(){
        
        cout<<"enter the login password:\n";
        cin>>password;
        if(password==1234){
            cout<<"valid password, so display the details.\n";
            display();
        }
        else{
            cout<<"Not a valid password\n";
        }
    }
    public: void display(){
        cout<<"Welcome to MyApp\n";
    }
    };
    class User_Profile{
    public: void accept(){
        if(password==1234){
            cout<<"password is correct, so accept the details.\n";
            cout<<"enter the username:\n";
        cin>>username;
        
        cout<<"enter the emailid:\n";
        cin>>emailid;
    
        cout<<"enter name:\n";
        cin>>name;
    
        }
        else{
            cout<<"password is incorrect so not accepted\n";
        }
        // cout<<"enter the username:\n";
        // cin>>username;
        
        // cout<<"enter the emailid:\n";
        // cin>>emailid;
    
        // cout<<"enter name:\n";
        // cin>>name;
    
    }
    public: void update(){
        cout<<"you want to update or delete";
        if(password==1234){
            cin>>username;
            cin>>emailid;
            cin>>name;
        }
    


    }
    public: void display(){
        if(password==1234){
            //accept();
        cout<<"\nusername is: "<<username;
        cout<<"\nemail is: "<<emailid;
        cout<<"\nname is: "<<name;
        }
        else{
            cout<<"Not display due to incorrect password\n";
        }
    
    }
    
    };
    int main(){
        Login_Details obj;    /*there are two classes, so name the two objects differently, otherwise compiler will confuse that
                                from which class the object belongs to... */
        User_Profile obj1;
        obj.validate();
        obj1.accept();
         obj1.display();
    return 0;
    }