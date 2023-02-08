/*
WAP to find area of circle, rectangle and triangle 
*/
#include<stdio.h>
#include<math.h>
#define pi 3.14
void main()
{
    float r,length,width,a,b,c,s,area,area1,area2;
    printf("Enter radius of circle:");
    scanf("%f",&r);
    area = pi * r*r;
    printf("Area of circle is:%f\n",area);   
     
    printf("Enter length of rectangle:");
    scanf("%f",&length);
    printf("Enter width of rectangle:");
    scanf("%f",&width);
    area1 = length*width;
    printf("Area of rectangle is:%f\n",area1); 
        
    printf("Enter values of triangle sides a,b and c:");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area2=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is:%f",area2);
}