/*a)WAP to create a class with name BankApp,
b)create a parametrized constructor of this class, that intialize class attributes like ,
productId,ProductName,Product price,
c)Implement Display function to display all records,
d)Update function to change product Price.
(update function will not modify original price of product)
additionally
e)create array of object to store product information of 5 different products.
f)Accept product id from user and change price of that product only.
g)Display product not exist ,if enter incorrect product id.*/
#include<iostream>
using namespace std;
class BankApp{//a part
    public:int productId;
    string productName;
    int productPrice;
    public:BankApp(int id,string name,int price){//b part
        productId=id;
        productName=name;
        productPrice=price;
    }
    public:void Display(){//c part
        cout<<"\n Product Id= "<<productId;
        cout<<"\n Product Name= "<<productName;
        cout<<"\n Product Price= "<<productPrice;
    }
    private: int pid;
public: void ProductIDval(){ //g part
    cout<<"\n Enter the Product ID:";
    cin>>pid;
    if(pid=1 && pid<=5){
        cout<<"\n Product Exists!";
    }
    else{
        cout<<"\n Product does not Exists !";
    }
}
public : void Update(int id,int price){//f part
    cout<<"\n Your new price is updated for the product ID: "<<id;
    cout<<"\n Your new price is Updated that is:"<<price;
}
};
void modify(BankApp obj2){//void modify(BankApp &obj2)-> for changing value after modidfication//d part
    obj2.productPrice=1000;
cout<<"\n Modified value of Product Price is:"<<obj2.productPrice;
}
int main(){
    BankApp obj[5]={{1,"Sketch Book",100},{2,"Pen",80},{3,"Mobile Phone",30000},{4,"Ipad",400000},{5,"wallet",5000}};//e part
    int i;
    for(i=0;i<5;i++){
        obj[i].Display();   
    }
    modify(obj[1]);
    obj[1].Display();
    int ID,Price;
    cout<<"\n Enter the Product ID of the product for which you want to update it`s price:";
    cin>>ID;
    cout<<"\n Enter the updated price for the product:";
    cin>>Price;
    obj[i].Update(ID,Price);
    obj[i].ProductIDval();
return 0;
}
