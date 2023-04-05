/*
Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading
*/
#include<iostream>
using namespace std;
class Overloading
{
    public:
    int add(int a, int b)
    {
        cout<<"\nAddition is:"<<a+b;
        return 0;
    }
    int sub(int a, int b)
    {
        cout<<"\nSubtraction is:"<<a-b;
        return 0;
    }
    int mul(int a, int b)
    {
        cout<<"\nMultiplication is:"<<a*b;
        return 0;
    }
    int div(float a, float b)
    {
        cout<<"\nDivision is:"<<a/b;
        return 0;
    }
};
int main()
{
    Overloading over;
    over.add(5,2);
    over.sub(5,2);
    over.mul(5,2);
    over.div(5,2);
    return 0;
}