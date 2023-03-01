/*
WAP to find factorial using recursion
*/
#include<stdio.h>  
long f(int n)  
{  
  if(n == 0)  
    return 1;  
  else  
    return(n * f(n-1));  
}  
void main()  
{  
  int no;  
  long fact;  
  printf("Enter a number: ");  
  scanf("%d", &no);   
   
  fact = f(no);  
  printf("Factorial of %d is %ld\n", no, fact);   
} 