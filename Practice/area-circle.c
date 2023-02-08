//Area of circle
#include<stdio.h>
#define pi 3.14
main()
{
    float r,area;
    printf("Enter radius of circle:");
    scanf("%f",&r);
    area = pi * r*r;
    printf("Area of circle is:%f",area);   
}
