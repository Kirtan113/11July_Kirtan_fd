/*WAP to find number is even or odd using ternary operator */
#include<stdio.h>
void main()
{
    int num;
    printf("Enter any integer number:");
    scanf("%d",&num);
    (num%2==0)?(printf("This number is even:%d",num)):(printf("This number is odd:%d",num));
}