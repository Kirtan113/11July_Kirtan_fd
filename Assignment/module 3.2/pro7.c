/*
WAP to print factorial of given number 
*/
#include <stdio.h>
int main()
{
	int num, i, f = 1;    
 	printf("Enter a number:");    
	scanf("%d",&num);  

	for(i=num; i>=1; i--)   
	{  
	  f = f * i;  
    }  
	printf ("%d! = %d",num,f);  
}