/*
Single-Level
Multi-Level
Multiple
Hirercy
Hybrid
*/
#include<iostream>
using namespace std;
class Base
{
    public:
        int no;
        int getdata()
    {
        cout<<"Enter the value of no:";
        cin>>no;
        return 0;
    }
        
};
class Derived : public Base
{
    public:
        int show()
    {
        cout<<"Value of no is:"<<no;
        return 0;
    }
};
int main()
{
    Derived d1;
    d1.getdata();
    d1.show();
}


