/*
WAP to create simple calculator using class
*/
#include <iostream>
using namespace std;
class Calculator 
{
public:
    float num1, num2;
    void getnum() 
    {
        cout<<"Enter first number:";
        cin>>num1;
        cout<<"Enter second number:";
        cin >> num2;
    }
    void add() 
    {
        cout<<"Addition:"<<num1 + num2<<"\n";
    }
    void subtract() 
    {
        cout<<"Subtraction:"<<num1 - num2<<"\n";
    }
    void multiply() 
    {
        cout<<"Multiplication:"<<num1 * num2<<"\n";
    }
    void divide() 
    {
        if (num2 == 0) 
        {
            cout<<"Cannot divide by zero."<<"\n";
        } 
        else 
        {
            cout<<"Division:"<< num1 / num2<<"\n";
        }
    }
};
int main() 
{
    Calculator calc;
    int choice;
    cout<<"Choose an operation:"<<"\n";
    cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division"<<"\n";
    cin>>choice;
    calc.getnum();
    switch (choice) 
    {
        case 1:
            calc.add();
            break;
        case 2:
            calc.subtract();
            break;
        case 3:
            calc.multiply();
            break;
        case 4:
            calc.divide();
            break;
        default:
            cout <<"Invalid choice."<<"\n";
            break;
    }
    return 0;
}
