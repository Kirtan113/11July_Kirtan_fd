/*
Write a program of to sort the array using templates. 
*/
#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) 
{
    sort(arr, arr + size);
}
int main() 
{
    int intArr[] = { 5, 2, 9, 1, 6 };
    double doubleArr[] = { 3.2, 1.8, 6.4, 2.5, 9.1 };
    const int size = sizeof(intArr) / sizeof(int);

    // Sort integer array
    sortArray(intArr, size);
    cout << "Sorted integer array: ";
    for (int i = 0; i < size; i++) 
    {
        cout << intArr[i] << " ";
    }
    cout << endl;

    // Sort double array
    sortArray(doubleArr, size);
    cout << "Sorted double array: ";
    for (int i = 0; i < size; i++) 
    {
        cout << doubleArr[i] << " ";
    }
    cout << endl;
    return 0;
}