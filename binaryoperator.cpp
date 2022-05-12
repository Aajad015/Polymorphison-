
#include<iostream>
using namespace std;
class A 
{
    int a,b;
    public:
     void setdata()
     {
         cout<<"Enter your number:-";
         cin>>a>>b;
     }
     void display()
     {
         cout<<"A:-"<<a<<"\nB:-"<<b;
     }
    
     A operator +(A x)
     {
         A temp;
         temp.a=a+x.a;
         temp.b=b+x.b;
         return temp;
     }
};
int main()
{
    A obj1,obj2,obj3;
    obj1.setdata();
    obj2.setdata();
    obj3=obj1.operator+(obj2);
    obj3.display();
}