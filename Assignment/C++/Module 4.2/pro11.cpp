/*
Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading 
Rectangle: Area * breadth 
Triangle: ½ *Area* breadth 
Circle: Pi * Area *Area
*/
#include <iostream>
using namespace std;
const float PI = 3.14;
// Function to calculate area of a circle
float area(float radius) 
{
    return PI * radius * radius;
}
// Function to calculate area of a rectangle
float area(float length, float width) 
{
    return length * width;
}
// Function to calculate area of a triangle
float area(float base, float height, char triangle) 
{
    return 0.5 * base * height;
}
int main() 
{
    float radius, length, width, base, height;
    char triangle;

    // Area of Circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;

    // Area of Rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << area(length, width) << endl;

    // Area of Triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << area(base, height, triangle) << endl;
    return 0;
}
