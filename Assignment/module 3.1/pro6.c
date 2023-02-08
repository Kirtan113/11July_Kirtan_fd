/*
WAP to convert years into days and days into years 
*/
#include<stdio.h>
void main()
{
    int years,days;
    printf("Enter the years:");
    scanf("%d",&years);
    days = years*365;
    printf("your days are:%d\n",days);

    printf("Enter the days:");
    scanf("%d",&days);
    years = days/365;
    printf("your years is:%d",years);
}