#include<iostream>
using namespace std;
int no = 100;
int main(int argc, char const *argv[])
{
    int no = 10;
    cout<<"\nValue of no(local variable) is:"<<no;
    cout<<endl<<"Value of no(global variable) is:"<<::no;
    return 0;
}