/*
Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) 
*/
#include<iostream>
using namespace std;
class person
{
    public:
    int age;
    char name[50];
    int per()
    {
        cout<<"Enter your name:";
        cin>>name;
        cout<<"\nEnter your age:";
        cin>>age;
        return 0;
    }
};
class student
{
    public:
    float percentage; 
    int stu()
    {
        cout<<"\nEnter your percentage:";
        cin>>percentage;
        return 0;
    }
};
class teacher : public person , public student
{
    public:
    int salary;
    int tea()
    {
        cout<<"\nEnter your salary:";
        cin>>salary;
        return 0;
    }
    int show()
    {
        cout<<"\n\nPerson name is:"<<name;
        cout<<"\nPerson age is:"<<age;
        cout<<"\nStudent percentage is:"<<percentage;
        cout<<"\nTeacher salary is:"<<salary;
        return 0;
    }
};
int main()
{
    teacher t;
    t.per();
    t.stu();
    t.tea();
    t.show();
}