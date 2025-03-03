/*Program to demonstrate the concept of Function overloading.
Create a class with name shapes, create a function with name Area(),
with Area function calculate Area of circle, Area of rectangle, Area of triangle, using function overloading*/
#include<iostream>
using namespace std;
class shapes {
    private: float res=0;float l1; float l;float b;
    public : void Area (float radius) {
        res = 3.14* radius* radius;
        cout<<"\n Area of circle is:"<<res;
    }
    public : void Area(float b, float h) {
        res =0.5* b*h;
        cout<<"\n Area of Triangle is: "<<res;
    }
    public: void Area() {
        l=5,b=8;
        res= l*b;
        cout<<"\n Area of Rectangle is : "<<res;
    }
    };
    int main()
    {
        shapes obj;
         obj.Area(5);//area of circle
         obj.Area(3,4);// area of trianle
         obj.Area();//area of rectangle
        return 0;
    }
