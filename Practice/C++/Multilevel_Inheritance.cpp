#include<iostream>
using namespace std;
class Grand
{
public:
    int house;
    int gdata()
    {
        cout<<"Enter the no of house:\n";
        cin>>house;
        return 0;
    }
};
class Perent : public Grand
{
public:  
    int bal;
    int pdata()
    {
        cout<<"Enter the total bank balance:\n";
        cin>>bal;
        return 0;
    }
};
class Child : public Perent 
{
public:
    int car;
    int cdata()
    {
        cout<<"Enter the no of toal car:\n";  
        cin>>car;
        return 0;
    };
    int show()
    {
        cout<<"\nTotal no of house is:\n"<<house <<"\n";
        cout<<"Total bank balance is:\n"<< bal <<"\n";
        cout<<"Total no of car is:\n"<< car <<"\n";
        return 0;
    }
};
int main()
{
    Child c1;
    c1.gdata();
    c1.pdata();
    c1.cdata();
    c1.show();
}