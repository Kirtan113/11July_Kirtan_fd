/*
WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 
82746 
*/
#include<stdio.h>
void main()
{
   int n,i,r,sum=0;
   printf("Enter number:"); 
   scanf("%d",&n);
   for(i=n; n>0 ;n=n/10)
   {
        r = n % 10;
        sum = sum*10 + r;
   }
   printf("\nYour reverse number is:%d",sum);
}