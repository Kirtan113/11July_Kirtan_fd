#include<iostream>
using namespace std;
class A
{
    int no;
public:
    int data(int n)
    {
        n++;
        return n;
    }
}a;
int main(int argc, char const *argv[])
{
   cout<<a.data(12); 
    return 0;
}