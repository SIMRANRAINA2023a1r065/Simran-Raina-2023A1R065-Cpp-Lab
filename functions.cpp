#include<iostream>
using namespace std;
class PayApp {
    private: float amount,dis; //data is provided security and extra importance in C++.That`s why data is declared as private and function as public which can be accesswd outside the class as well.
    public : void Accept(){
        cout<<"Enter Amount:";
        cin>>amount;
    }
    public : void validate() {
        if (amount>0) {
        cout<<"Amount is valid !";
        Discount();
        Display();
    }
    else{
        cout<<"You entered the invaid amount !";
    }
}
public : void Discount()
{
    dis = amount/100*10;
}
public : void Display() {
    cout <<"\n Your payable bill is :" << amount-dis;
}
};
int main()
{
    PayApp obj; // object creating
    obj.Accept();// function calling
    obj.validate();
    return 0;
}