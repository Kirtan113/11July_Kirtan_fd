/*
Write a program of to swap the two values using templates
*/
#include<iostream>
using namespace std;
template <class T>
int A(T& x, T& y)
{
	T t;
	t = x;
	x = y;
	y = t;
	return 0;
}
int main()
{
	int a, b;
	a = 10, b = 20;
	A(a, b);
	cout<<a<<" "<<b;
	return 0;
}