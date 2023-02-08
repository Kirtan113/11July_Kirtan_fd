//Conditional operator
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the  value of a and b:");
    scanf("%d%d",&a,&b);
    (a>b)?(printf("a is max.")):(printf("b is max."));
}