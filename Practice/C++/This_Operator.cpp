#include<iostream>
using namespace std;
class This
{
public:
    int no;
    void data()
    {
        int no = 10;
        this -> no = 100;
        cout<<"\nValue of no(data member) is:"<<this->no;
        cout<<endl<<"Value of no(local variable) is:"<<no;
    }
};
int main()
{
    This t1;
    t1.data();
    return 0;
}