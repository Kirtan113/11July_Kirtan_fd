/*
WAP to find simple interest 
*/
#include<stdio.h>
void main()
{
    float P,R,T,SI;
    printf("Enter value of Principal amount P:");
    scanf("%f",&P);
    printf("Enter value of Principal Time T:");
    scanf("%f",&T);
    printf("Enter value of Rate of Interest R:");
    scanf("%f",&R);
    SI = (P*T*R)/100;
    printf("Simple Interest is:%f",SI);    
}