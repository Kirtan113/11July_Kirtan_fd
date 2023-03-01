/*
Write a program make a summation of given number (E.g., 1523 Ans: -11)
*/
#include<stdio.h>
void main()
{
    int no,r,sum=0;
    printf("Enter number:");
    scanf("%d",&no);
    while (no>0) 
    {
        r = no % 10;
        sum = sum + r;
        no = no / 10;
    }
    printf("Sum of digits of the number is %d", sum);
}