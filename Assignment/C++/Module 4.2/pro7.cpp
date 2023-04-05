/*
Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)
*/
#include<iostream>
using namespace std;
class Student
{
    public:
    int rollno;
    int stu()
    {
        cout<<"Enter your roll no:";
        cin>>rollno;
        return 0;
    }
};
class Test : public Student
{
    public:
    int marks,marks1;
    int tes()
    {
        cout<<"\nEnter your 1st subject marks:";
        cin>>marks;
        cout<<"\nEnter your 2nd subject marks:";
        cin>>marks1;
        return 0;
    }
};
class Result : public Test
{
    public:
    int mar;
    int rea()
    {
        cout<<"\nEnter total marks in test:";
        cin>>mar;
        return 0;
    }
    int show()
    {
        cout<<"\nYour roll no is:"<<rollno;
        cout<<"\nYour 1st subject marks is:"<<marks;
        cout<<"\nYour 2nd subject marks is:"<<marks1;
        cout<<"\nYour total marks in test is:"<<mar;
        return 0;
    }
};
int main()
{
    Result r;
    r.stu();
    r.tes();
    r.rea();
    r.show();
}