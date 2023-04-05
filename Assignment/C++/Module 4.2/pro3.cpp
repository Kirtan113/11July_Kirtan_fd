/*
Write a program to find the multiplication values and the cubic values using 
inline function
*/
#include<iostream>
using namespace std;
class A 
{
    public:
    inline float mul(float x, float y) 
    {
        return(x*y);
    }
    inline float cube(float x) 
    {
        return(x*x*x);
    }
};
int main()
{
    A a;
    float n1, n2;
    cout<<"Enter two values:\n";
    cin>>n1>>n2;
    cout<<"\nMultiplication value is:"<<a.mul(n1,n2);
    cout<<"\nCube value is:"<<a.cube(n1)<<" and "<<a.cube(n2);
    return 0;
}