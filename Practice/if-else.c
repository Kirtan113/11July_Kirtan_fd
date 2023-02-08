//Use of  if....else conditional statment
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter value of a and b:");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("a is maximum.");
    }
    else if (a==b)
    {
        printf("a and b both are equel.");
    }
    
    else
    {
        printf("b is maximum.");
    }
    
}