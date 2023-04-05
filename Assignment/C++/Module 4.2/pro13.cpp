/*
Write a program to find the max number from given two numbers using 
friend function
*/
#include<iostream>
using namespace std;
void findmax();
class A
{
    int n1;
    public:
    A()
    {
        cout<<"Enter 1st number:\n";
        cin>>n1;
    }
    friend void findmax();
};
class B
{
    int n2;
    public:
    B()
    {
        cout<<"Enter 2nd number:\n";
        cin>>n2;
    }
    friend void findmax();
};
void findmax()
{
    A a;
    B b;
    if(a.n1>b.n2)
        cout<<"1st number is max.\n";
    else if (b.n2>a.n1)
        cout<<"2nd number is max.\n";
    else
        cout<<"both are equel.";
}
int main()
{
    findmax();
    return 0;
}