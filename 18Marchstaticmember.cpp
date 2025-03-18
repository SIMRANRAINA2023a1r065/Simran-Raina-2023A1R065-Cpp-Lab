// Normal variables vs static variables in cpp
#include<iostream>
using namespace std;
class program {
    public: void Fun(){
        static int n=0; //Normal variable inside a function
        n++;
        cout<<"\n Value of n is:"<<n;
    }
};
int main(){
    program obj1,obj2,obj3;
    obj1.Fun();
    obj2.Fun();
    obj3.Fun();
    return 0;
}