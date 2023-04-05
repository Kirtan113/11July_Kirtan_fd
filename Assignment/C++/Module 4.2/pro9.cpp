/*
Write a Program of Two 1D Matrix Addition using Operator Overloading
*/
#include<iostream>
using namespace std;
class Matrix 
{
    private:
    int* arr;
    int size;
    public:
    Matrix(int n) 
    {
        size = n;
        arr = new int[size];
    }
    Matrix(const Matrix& m) 
    {
        size = m.size;
        arr = new int[size];
        for(int i = 0; i < size; i++) 
        {
            arr[i] = m.arr[i];
        }
    }
    Matrix operator+(const Matrix& m) 
    {
        Matrix result(size);
        for (int i = 0; i < size; i++) 
        {
            result.arr[i] = arr[i] + m.arr[i];
        }
        return result;
    }
    void setValue(int index, int value) 
    {
        arr[index] = value;
    }
    void display() 
    {
        for (int i = 0; i < size; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() 
{
    int size = 5;
    Matrix m1(size);
    m1.setValue(0, 1);
    m1.setValue(1, 2);
    m1.setValue(2, 3);
    m1.setValue(3, 4);
    m1.setValue(4, 5);
    cout << "Matrix 1: ";
    m1.display();
    Matrix m2(size);
    m2.setValue(0, 5);
    m2.setValue(1, 4);
    m2.setValue(2, 3);
    m2.setValue(3, 2);
    m2.setValue(4, 1);
    cout << "Matrix 2: ";
    m2.display();
    Matrix m3 = m1 + m2;
    cout << "Matrix 3 (Result): ";
    m3.display();
    return 0;
}