#include<iostream>
using namespace std;
class Caps
{
    private:
        int a,b;
    public:
        Caps(int x,int y)
        {
            a = x;
            b = y;
            cout<<"Value of a is:"<<a<<"\nValue of b is:"<<b;
        }
};
int main()
{
    Caps C(1,2);
}