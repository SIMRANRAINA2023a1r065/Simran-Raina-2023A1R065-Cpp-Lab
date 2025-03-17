/* a. Create a class with name Bank
b.  member variable with name balance
c. Parametrized constructor to initialize member variable
d. display function to display() updated balance
e. function with name NetBanking() // return object
 this function will deposit amount and add this amount with balance*/
 #include<iostream>
 using namespace std;
 class Bank {
    public: float balance;
Bank(float bal) {
 balance =bal;
}
void display(){
cout<<"\n Updated in account is:"<<balance;
}
 };
Bank NetBanking(Bank obj1){
 float amt;
 cout<<"\n Enter amount to deposit:";
 cin>>amt;
 cout<<"\n amount is:"<<amt;
 obj1.balance = obj1.balance+amt;
 return obj1;
}
 int main(){
 Bank obj2(2000); // function calling : parametrized constructor
obj2.display();
obj2=NetBanking(obj2);
obj2.display();
return 0;
 }
