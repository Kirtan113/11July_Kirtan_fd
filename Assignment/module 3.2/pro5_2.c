/*
Looping programs:
2. WAP to take 10 no. Input from user and find out …
 How many Even numbers are there 
 How many odd numbers are there 
 Sum of even numbers 
 Sum of odd numbers 
*/
#include<stdio.h>
int main()
{
 int Size, i, a[10];
 int Even = 0, Odd = 0;
 
 printf("\n Please Enter the Size of an Array :  ");
 scanf("%d", &Size);
 
 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < Size; i++)
 {
   scanf("%d", &a[i]);
 }
  
 for(i = 0; i < Size; i ++)
 {
   if(a[i] % 2 == 0)
   {
     Even++;
   }
   else
   {
     Odd++;
   }
 }
 
 printf("\n Total Number of Even Numbers in this Array = %d ", Even);
 printf("\n Total Number of Odd Numbers in this Array = %d ", Odd);
 
 return 0;
}