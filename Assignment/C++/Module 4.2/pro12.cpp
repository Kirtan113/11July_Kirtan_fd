/*
Write a program to swap the two numbers using friend function without 
using third variable 
*/
#include<iostream>
using namespace std;
class Number 
{
    public:
    int no;
    Number(int n) 
    {
        no = n;
    }
    void display() 
    {
        cout<<no<<"\n";
    }
    friend void swap(Number& n1, Number& n2);
};
void swap(Number& n1, Number& n2) 
{
    n1.no = n1.no + n2.no;
    n2.no = n1.no - n2.no;
    n1.no = n1.no - n2.no;
}
int main() 
{
    Number n1(5), n2(10);
    cout<<"Before swap:\n";
    n1.display();
    n2.display();
    swap(n1, n2);
    cout<<"After swap:\n";
    n1.display();
    n2.display();
    return 0;
}