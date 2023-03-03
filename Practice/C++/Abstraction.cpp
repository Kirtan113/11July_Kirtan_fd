#include<iostream>
using namespace std;
class Abstract
{
    private:
        int no;
    public:
        Abstract(int a)        //Parameterise Constractor
        {
        //int a = 1;          
        no = a;
        cout<<"Value of no is:"<<no;
        }
};
int main()
{
    Abstract A(1);
}


/*
Default Constractor
Parameterise Constarctor
Copy Constractor
*/