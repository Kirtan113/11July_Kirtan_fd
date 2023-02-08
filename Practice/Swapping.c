//swapping two numbers
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("After swapping value of a and b is:%d\n%d",a,b);
}
