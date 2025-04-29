/* Program:- Array of Pointer to object 
stores student Information at Runtime*/
#include<iostream>
using namespace std;
class student {
    public: int RegNo ; string Name;
    public: void Accept(int Number, string name){
        RegNo= Number;
        Name=name;
    }
    void Display(){
        cout<<"\n Name is :"<<Name;
        cout<<"\t Registration Number is:"<<RegNo;
    }
};
int main(){
    int n,i;
    cout<<"Enter how many student records u want to store:";
    cin>>n;
    int R; string N;
    student *obj[n]; //Array of Pointer to Object
    for(i=0;i<n;i++){ // In case of array always index starts from 0 otherwise , the index will remain empty
        obj[i]=new student (); //Allocating memory at runtime
        cout<<"\n Enter Student Registration Number and Name:";
        cin>>R>>N;
        obj[i]-> Accept(R,N);
    }
    cout<<"\n Displaying Student Information:";
    for(i=0;i<n;i++){
        obj[i]->Display(); //calling Display Function using Array of Pointer
        //Here Each Pointer of array, pointing towardsa different student record
    }
    for(i=0;i<n;i++){
        delete obj[i]; //Deallocating Memory of Array of Pointers
        obj[i]->Display();
    }
    return 0;
    } 