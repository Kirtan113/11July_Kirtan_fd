/*
Write a program of Addition, Subtraction, Division, Multiplication using 
constructor
*/
#include <iostream>
using namespace std;
class clc 
{
    private:
        float num1,num2,result;
    public:
        clc (float n1, float n2)
        {
            num1 = n1;
            num2 = n2;
        }
        void add() 
        {
            result = num1 + num2;
            cout<<num1<<" + "<<num2<<" = "<<result<<endl;
        }
        
        void subtract() 
        {
            result = num1 - num2;
            cout<<num1<<" - "<<num2<<" = "<<result<<endl;
        }
        
        void multiply() 
        {
            result = num1 * num2;
            cout<<num1<<" * "<<num2<<" = "<<result<<endl;
        }
        
        void divide() 
        {
            if(num2 == 0) 
            {
                cout<<"Error:Cannot divide by zero."<<endl;
            } 
            else 
            {
                result = num1 / num2;
                cout<<num1<<" / "<<num2<<" = "<<result<<endl;
            }
        }
};
int main() 
{
    clc c(10,2);
    c.add();      
    c.subtract(); 
    c.multiply(); 
    c.divide();   
}