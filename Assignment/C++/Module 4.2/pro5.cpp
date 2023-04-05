/*
Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance) 
*/
#include<iostream>
using namespace std;
class cricketer
{
    public:
    float run,avg;
    int getdata()
    {
        cout<<"Enter your total runs in last 5 matches:";
        cin>>run;
        avg = run/5;
        return 0;
    }
}; 
class batsman : public cricketer
{
    public:
    int show()
    {
        cout<<"Your average runs in last 5 matches is:"<<avg;
        return 0;
    }
};
int main()
{
    batsman b;
    b.getdata();
    b.show();
}