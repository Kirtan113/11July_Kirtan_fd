/*
Write a program to concatenate the two strings using Operator Overloading
*/
#include<iostream>
#include<string.h>
using namespace std;
class String
{
    public:
    char s[100];
    void get()
    {
        cout<<"Enter the String: ";
        cin>>s;
    }
    void show()
    {
        cout<<s;
    }
    String operator+(String a)
    {
        String obj;
        strcpy(obj.s,s);
        strcat(obj.s,a.s);
        return obj;
    }
};
int main()
{
    String s1,s2,s3;
    s1.get();
    s2.get();
    s3 = s1+s2;
    cout<<"After concating: ";
    s3.show();
    return 0;
}


