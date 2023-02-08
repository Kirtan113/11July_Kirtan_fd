/*WAP to swap two numbers without using third variable */
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping value of a and b is:%d\n%d",a,b);
}
